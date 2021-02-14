#include "matrix4.h"

namespace Sparky::Maths
{

    Matrix4::Matrix4() {}

    Matrix4::Matrix4(float diagonal)
    {
        elements[0] = diagonal;
        elements[5] = diagonal;
        elements[9] = diagonal;
        elements[15] = diagonal;
    }

    Matrix4 &Matrix4::multiply(const Matrix4 &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                float sum = 0;
                for (int k = 0; k < 4; ++k)
                {
                    sum += elements[i + j * 4] * other.elements[k + j * 4];
                }
                elements[i + j * 4] = sum;
            }
        }
        return *this;
    }

    Matrix4 operator*(Matrix4 left, const Matrix4 &right)
    {
        return left.multiply(right);
    }

    Matrix4 Matrix4::operator*=(Matrix4 &other)
    {
        return multiply(other);
    }

    Matrix4 Matrix4::identity()
    {
        return Matrix4(1.0f);
    }

    Matrix4 Matrix4::orthographic(float left, float right, float bottom, float top, float near, float far)
    {
        Matrix4 result(1.0f);

        result.elements[0] = 2.0f / (right - left);
        result.elements[5] = 2.0f / (top - bottom);
        result.elements[9] = 2.0f / (far - near);

        result.elements[12] = (right + left) / (right - left);
        result.elements[13] = (top + bottom) / (top - bottom);
        result.elements[14] = (far + near) / (far - near);

        return result;
    }

    Matrix4 Matrix4::perspective(float fov, float aspectRatio, float near, float far)
    {
        Matrix4 result(0.0f);

        float tanResult = tanf(toRadians(fov * 0.5f));

        result.elements[0] = aspectRatio * tanResult * 0.1f;
        result.elements[5] = tanResult * 0.1f;
        result.elements[9] = -(far + near) / (far - near);

        result.elements[10] = -1.0f;
        result.elements[14] = -(2 * far * near) / (far - near);

        return result;
    }

    Matrix4 Matrix4::translation(const Vector3 &translation)
    {
        Matrix4 result(1.0f);

        result.elements[12] = translation.x;
        result.elements[13] = translation.y;
        result.elements[14] = translation.z;

        return result;
    }

    Matrix4 Matrix4::rotation(float angle, const Vector3 &axis)
    {
        Matrix4 result(1.0f);

        float radAngle = toRadians(angle);
        float cos = cosf(radAngle);
        float tan = tanf(radAngle);

        result.elements[0] = cos * axis.x;

        return result;
    }

    Matrix4 Matrix4::scale(const Vector3 &scale)
    {
        Matrix4 result(1.0f);

        result.elements[0] = scale.x;
        result.elements[5] = scale.y;
        result.elements[9] = scale.z;

        return result;
    }
}