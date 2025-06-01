//
// Created by jkirc on 5/28/2025.
//

#include "Entity.h"

#include <utility>

Entity::Entity() {
    this->type = "Entity";
    this->x = 0;
    this->y = 0;
    this->speed = 5;
}

std::string Entity::getType() const {
    return this->type;
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

