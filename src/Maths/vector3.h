#pragma once

#include <iostream>

namespace Sparky::Maths
{
    struct Vector3
    {
        float x, y, z;

        Vector3();

        Vector3(float &x, float &y, float &z);

        Vector3 &add(const Vector3 &other);

        Vector3 &subtract(const Vector3 &other);

        Vector3 &multiply(const Vector3 &other);

        Vector3 &divide(const Vector3 &other);

#pragma region VECTOR_OPERATORS

        friend std::ostream &operator<<(std::ostream &ostream, const Vector3 &vector)
        {
            ostream << "Vector3: (" << vector.x << ", " << vector.y << ", " << vector.z << ')';
            return ostream;
        }

        friend Vector3 operator+(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.add(rightVect);
        }

        friend Vector3 operator-(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.subtract(rightVect);
        }

        friend Vector3 operator*(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.multiply(rightVect);
        }

        friend Vector3 operator/(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.divide(rightVect);
        }

        friend Vector3 operator+=(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.add(rightVect);
        }

        friend Vector3 operator-=(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.subtract(rightVect);
        }

        friend Vector3 operator*=(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.multiply(rightVect);
        }

        friend Vector3 operator/=(Vector3 leftVect, const Vector3 &rightVect)
        {
            return leftVect.divide(rightVect);
        }

        bool operator==(const Vector3 &otherVect) const
        {
            return x == otherVect.x && y == otherVect.y && z == otherVect.z;
        }

        bool operator!=(const Vector3 &otherVect) const
        {
            return !(*this == otherVect);
        }

#pragma endregion
    };
}
