#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <cmath>
#include <ostream>

class Vector2D {
    double x;
    double y;

public:
    // Constructors
    Vector2D();
    Vector2D(double x, double y);

    // Accessors
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    // Core operations
    Vector2D add(const Vector2D& other) const;
    Vector2D subtract(const Vector2D& other) const;
    Vector2D multiply(const Vector2D& other) const;
    Vector2D normalize() const;
    double length() const;
    double lengthSquared() const;
    double dot(const Vector2D& other) const;
    double distanceTo(const Vector2D& other) const;

    // Operators
    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(const Vector2D& other) const;
    bool operator==(const Vector2D& other) const;
    bool operator!=(const Vector2D& other) const;
    double operator[](int index) const;

    // Output stream
    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);

    // Static helpers
    static Vector2D zero();
    static Vector2D unitX();
    static Vector2D unitY();
};

#endif //VECTOR2D_H
