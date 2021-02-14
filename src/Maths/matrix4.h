#pragma once

#include "maths.h"

namespace Sparky::Maths
{
    struct Matrix4
    {
        float elements[4 * 4];

        Matrix4();

        Matrix4(float diagonal);


        Matrix4 &multiply(const Matrix4 &other);


        static Matrix4 identity();

        static Matrix4 orthographic(float left, float right, float bottom, float top, float near, float far);

        static Matrix4 perspective(float fov, float aspectRatio, float near, float far);


        static Matrix4 translation(const Vector3 &translation);

        static Matrix4 rotation(float angle, const Vector3 &axis);

        static Matrix4 scale(const Vector3 &scale);

#pragma region MATRIX_OPERATORS

        friend Matrix4 operator*(Matrix4 left, const Matrix4& right);
        Matrix4 operator*=(Matrix4& other);

#pragma endregion
    };
}
