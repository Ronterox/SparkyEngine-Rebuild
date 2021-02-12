#include "vector4.h"


namespace Sparky::Maths
{

    Vector4::Vector4()
    {
        x = .0f;
        y = .0f;
        z = .0f;
        w = .0f;
    }

    Vector4::Vector4(float &x, float &y, float &z, float &w)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }

    Vector4 &Vector4::add(const Vector4 &other)
    {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        this->w += other.w;
        return *this;
    }

    Vector4 &Vector4::subtract(const Vector4 &other)
    {
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
        this->w -= other.w;
        return *this;
    }

    Vector4 &Vector4::multiply(const Vector4 &other)
    {
        this->x *= other.x;
        this->y *= other.y;
        this->z *= other.z;
        this->w *= other.w;
        return *this;
    }

    Vector4 &Vector4::divide(const Vector4 &other)
    {
        this->x /= other.x;
        this->y /= other.y;
        this->z /= other.z;
        this->w /= other.w;
        return *this;
    }
}