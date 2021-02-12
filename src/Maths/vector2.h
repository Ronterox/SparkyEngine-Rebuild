#pragma once

#include <iostream>

namespace Sparky::Maths
{
    struct Vector2
    {
        float x, y;

        Vector2();

        Vector2(float &x, float &y);

        Vector2 &add(const Vector2 &other);

        Vector2 &subtract(const Vector2 &other);

        Vector2 &multiply(const Vector2 &other);

        Vector2 &divide(const Vector2 &other);

#pragma region VECTOR_OPERATORS
        friend std::ostream &operator<<(std::ostream &ostream, const Vector2 &vector)
        {
            ostream << "Vector2: (" << vector.x << ", " << vector.y << ')';
            return ostream;
        }

        friend Vector2 &operator+(Vector2 &lhs, const Vector2 &rhs)
        {
            return lhs.add(rhs);
        }

        friend Vector2 &operator-(Vector2 &lhs, const Vector2 &rhs)
        {
            return lhs.subtract(rhs);
        }

        friend Vector2 &operator*(Vector2 &lhs, const Vector2 &rhs)
        {
            return lhs.multiply(rhs);
        }

        friend Vector2 &operator/(Vector2 &lhs, const Vector2 &rhs)
        {
            return lhs.divide(rhs);
        }

#pragma endregion
    };
}