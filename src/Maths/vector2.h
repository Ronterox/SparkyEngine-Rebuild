#pragma once

#include <iostream>

namespace Sparky::Maths
{
    struct Vector2
    {
        float x, y;

        Vector2();

        Vector2(const float &x, const float &y);

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

        friend Vector2 operator+(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.add(rightVect);
        }

        friend Vector2 operator-(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.subtract(rightVect);
        }

        friend Vector2 operator*(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.multiply(rightVect);
        }

        friend Vector2 operator/(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.divide(rightVect);
        }

        friend Vector2 &operator+=(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.add(rightVect);
        }

        friend Vector2 &operator-=(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.subtract(rightVect);
        }

        friend Vector2 &operator*=(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.multiply(rightVect);
        }

        friend Vector2 &operator/=(Vector2 leftVect, const Vector2 &rightVect)
        {
            return leftVect.divide(rightVect);
        }

        bool operator==(const Vector2 &otherVect) const
        {
            return x == otherVect.x && y == otherVect.y;
        }

        bool operator!=(const Vector2 &otherVect) const
        {
            return !(*this == otherVect);
        }

#pragma endregion
    };
}
