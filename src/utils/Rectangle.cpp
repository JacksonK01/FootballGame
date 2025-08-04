//
// Created by jkirc on 6/7/2025.
//

#include "Rectangle.h"

#include <algorithm>

Rectangle::Rectangle(int x, int y, int width, int height) {
    this->x = x;
    this->y = y;

    this->width = width;
    this->height = height;
}

int Rectangle::getX() const {
    return this->x;
}

int Rectangle::getY() const {
    return this->y;
}

int Rectangle::getWidth() const {
    return this->width;
}

int Rectangle::getHeight() const {
    return this->height;
}

bool Rectangle::intersects(const Rectangle& other) const {

    const bool doesOverlap = x > other.x + other.width ||
                            other.x > x + width ||
                            y > other.y + height ||
                            other.y > y + height;


    return !doesOverlap;
}





