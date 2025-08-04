//
// Created by jkirc on 8/2/2025.
//

#include "Vector2D.h"

// Constructors
Vector2D::Vector2D() : x(0), y(0) {}

Vector2D::Vector2D(int x, int y) : x(x), y(y) {}

// Accessors
int Vector2D::getX() const { return x; }
int Vector2D::getY() const { return y; }
void Vector2D::setX(int x) { this->x = x; }
void Vector2D::setY(int y) { this->y = y; }

// Core operations
Vector2D Vector2D::add(const Vector2D& other) const {
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::subtract(const Vector2D& other) const {
    return Vector2D(x - other.x, y - other.y);
}

Vector2D Vector2D::multiply(const Vector2D& other) const {
    return Vector2D(x * other.x, y * other.y);
}

float Vector2D::length() const {
    return std::sqrt(static_cast<float>(x * x + y * y));
}

float Vector2D::lengthSquared() const {
    return static_cast<float>(x * x + y * y);
}

Vector2D Vector2D::normalize() const {
    float len = length();
    if (len == 0) return Vector2D(0, 0);
    return Vector2D(static_cast<int>(x / len), static_cast<int>(y / len));
}

int Vector2D::dot(const Vector2D& other) const {
    return x * other.x + y * other.y;
}

float Vector2D::distanceTo(const Vector2D& other) const {
    int dx = x - other.x;
    int dy = y - other.y;
    return std::sqrt(static_cast<float>(dx * dx + dy * dy));
}

// Operator overloads
Vector2D Vector2D::operator+(const Vector2D& other) const {
    return add(other);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return subtract(other);
}

Vector2D Vector2D::operator*(const Vector2D& other) const {
    return multiply(other);
}

bool Vector2D::operator==(const Vector2D& other) const {
    return x == other.x && y == other.y;
}

bool Vector2D::operator!=(const Vector2D& other) const {
    return !(*this == other);
}

int Vector2D::operator[](int index) const {
    if (index == 0) return x;
    else if (index == 1) return y;
    throw std::out_of_range("Index out of range for Vector2D");
}

std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}

// Static helpers
Vector2D Vector2D::zero() {
    return Vector2D(0, 0);
}

Vector2D Vector2D::unitX() {
    return Vector2D(1, 0);
}

Vector2D Vector2D::unitY() {
    return Vector2D(0, 1);
}
