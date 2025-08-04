//
// Created by jkirc on 8/2/2025.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <cmath>
#include <ostream>

class Vector2D {
private:
    int x;
    int y;

public:
    // Constructors
    Vector2D();
    Vector2D(int x, int y);

    // Accessors
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

    // Core operations
    Vector2D add(const Vector2D& other) const;
    Vector2D subtract(const Vector2D& other) const;
    Vector2D multiply(const Vector2D& other) const;
    Vector2D normalize() const;
    float length() const;
    float lengthSquared() const;
    int dot(const Vector2D& other) const;
    float distanceTo(const Vector2D& other) const;

    // Operators
    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(const Vector2D& other) const;
    bool operator==(const Vector2D& other) const;
    bool operator!=(const Vector2D& other) const;
    int operator[](int index) const;

    // Output stream
    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);

    // Static helpers
    static Vector2D zero();
    static Vector2D unitX();
    static Vector2D unitY();
};

#endif //VECTOR2D_H
