#include "Vector2D.h"

// Constructors
Vector2D::Vector2D() : x(0.0), y(0.0) {}
Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

// Accessors
double Vector2D::getX() const { return x; }
double Vector2D::getY() const { return y; }
void Vector2D::setX(double x) { this->x = x; }
void Vector2D::setY(double y) { this->y = y; }

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

double Vector2D::length() const {
    return std::sqrt(x * x + y * y);
}

double Vector2D::lengthSquared() const {
    return x * x + y * y;
}

Vector2D Vector2D::normalize() const {
    double len = length();
    if (len == 0.0) return Vector2D(0.0, 0.0);
    return Vector2D(x / len, y / len);
}

double Vector2D::dot(const Vector2D& other) const {
    return x * other.x + y * other.y;
}

double Vector2D::distanceTo(const Vector2D& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}

// Operators
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

double Vector2D::operator[](int index) const {
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
    return Vector2D(0.0, 0.0);
}

Vector2D Vector2D::unitX() {
    return Vector2D(1.0, 0.0);
}

Vector2D Vector2D::unitY() {
    return Vector2D(0.0, 1.0);
}
