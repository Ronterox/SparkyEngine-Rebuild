#include "vector3.h"


namespace Sparky::Maths
{

    Vector3::Vector3()
    {
        x = .0f;
        y = .0f;
        z = .0f;
    }

    Vector3::Vector3(const float &x, const float &y, const float &z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Vector3 &Vector3::add(const Vector3 &other)
    {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        return *this;
    }

    Vector3 &Vector3::subtract(const Vector3 &other)
    {
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
        return *this;
    }

    Vector3 &Vector3::multiply(const Vector3 &other)
    {
        this->x *= other.x;
        this->y *= other.y;
        this->z *= other.z;
        return *this;
    }

    Vector3 &Vector3::divide(const Vector3 &other)
    {
        this->x /= other.x;
        this->y /= other.y;
        this->z /= other.z;
        return *this;
    }
}