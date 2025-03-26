#include "Vector2D.hpp"
#include <cmath>

Vector2D::Vector2D (float x, float y) : x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return Vector2D(x - other.x, y - other.y);
} 

Vector2D Vector2D::operator*(float scalar) const {
    return Vector2D(x * scalar, y * scalar);
} 

float Vector2D::magnitude() const {
    return std::sqrt(x * x + y * y);
}

Vector2D Vector2D::normalized() const {
    float mag = magnitude();
    return (mag != 0) ? (*this * (1.0f / mag)) : Vector2D();
}