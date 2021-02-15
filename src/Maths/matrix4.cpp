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
                    sum += elements[j + k * 4] * other.elements[k + i * 4];
                }
                elements[j + i * 4] = sum;
            }
        }
        return *this;
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
        float sin = sinf(radAngle);
        float cosNo = 1.0f - cos;

        result.elements[0] = cos + cosNo * cosNo * axis.x;
        result.elements[1] = axis.y * axis.x * cosNo + axis.z * sin;
        result.elements[2] = axis.z * axis.x * cosNo - axis.y * sin;

        result.elements[4] = axis.x * axis.y * cosNo - axis.z * sin;
        result.elements[5] = cos + axis.y * cosNo * cosNo;
        result.elements[6] = axis.z * axis.y * cosNo + axis.x * sin;

        result.elements[8] = axis.x * axis.z * cosNo + axis.y * sin;
        result.elements[9] = axis.y * axis.z * cosNo - axis.x * sin;
        result.elements[10] = cos + axis.z * cosNo * cosNo;

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