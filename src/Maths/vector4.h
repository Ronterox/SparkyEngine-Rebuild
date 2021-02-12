#pragma once

#include <iostream>

namespace Sparky::Maths
{
    struct Vector4
    {
        float x, y, z, w;

        Vector4();

        Vector4(float &x, float &y, float& z, float& w);

        Vector4 &add(const Vector4 &other);

        Vector4 &subtract(const Vector4 &other);

        Vector4 &multiply(const Vector4 &other);

        Vector4 &divide(const Vector4 &other);

#pragma region VECTOR_OPERATORS

        friend std::ostream &operator<<(std::ostream &ostream, const Vector4 &vector)
        {
            ostream << "Vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ')';
            return ostream;
        }

        friend Vector4 &operator+(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.add(rightVect);
        }

        friend Vector4 &operator-(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.subtract(rightVect);
        }

        friend Vector4 &operator*(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.multiply(rightVect);
        }

        friend Vector4 &operator/(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.divide(rightVect);
        }

        friend Vector4 &operator+=(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.add(rightVect);
        }

        friend Vector4 &operator-=(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.subtract(rightVect);
        }

        friend Vector4 &operator*=(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.multiply(rightVect);
        }

        friend Vector4 &operator/=(Vector4 leftVect, const Vector4 &rightVect)
        {
            return leftVect.divide(rightVect);
        }

        bool operator==(const Vector4 &otherVect) const
        {
            return x == otherVect.x && y == otherVect.y && z == otherVect.z && w == otherVect.w;
        }

        bool operator!=(const Vector4 &otherVect) const
        {
            return !(*this == otherVect);
        }

#pragma endregion
    };
}
