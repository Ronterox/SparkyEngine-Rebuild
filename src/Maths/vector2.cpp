#include "vector2.h"

namespace Sparky::Maths
{

    Vector2::Vector2()
    {
        x = .0f;
        y = .0f;
    }

    Vector2::Vector2(float &x, float &y)
    {
        this->x = x;
        this->y = y;
    }

    Vector2 &Vector2::add(const Vector2 &other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }

    Vector2 &Vector2::subtract(const Vector2 &other)
    {
        this->x -= other.x;
        this->y -= other.y;
        return *this;
    }

    Vector2 &Vector2::multiply(const Vector2 &other)
    {
        this->x *= other.x;
        this->y *= other.y;
        return *this;
    }

    Vector2 &Vector2::divide(const Vector2 &other)
    {
        this->x /= other.x;
        this->y /= other.y;
        return *this;
    }
}