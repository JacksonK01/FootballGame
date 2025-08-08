//
// Created by jkirc on 5/28/2025.
//

#include "Entity.h"

#include <iostream>
#include <sstream>

#include <utility>

#include "../utils/Logger.h"

Entity::Entity(): x(0), y(0), boundingBox(this->x, this->y, 100, 100) {
    this->speed = 5;
    this->lookVec = Vector2D();
}

int Entity::getX() const {
    return this->x;
}

void Entity::setX(const int x) {
    this->x = x;
}

int Entity::getY() const {
    return this->y;
}

void Entity::setY(const int y) {
    this->y = y;
}

int Entity::getSpeed() const {
    return this->speed;
}

void Entity::directionInput(const Vector2D direction) {
    lookVec = direction;
    this->x += direction.getX() * this->getSpeed();
    this->y += direction.getY() * this->getSpeed();
}

void Entity::mouseInput(const Vector2D pos) {
    lookVec = pos.normalize();
    std::cout << "I'm looking at " << lookVec << "\n";
}

void Entity::onClicked(const Vector2D pos) {
    std::cout << "I've been clicked on at " << pos << "\n";
}


void Entity::tick(const int dt) {
    boundingBox.setX(this->x);
    boundingBox.setY(this->y);
}



