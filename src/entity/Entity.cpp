//
// Created by jkirc on 5/28/2025.
//

#include "Entity.h"
#include <sstream>

#include <utility>

#include "../utils/Logger.h"

Entity::Entity() {
    this->x = 0;
    this->y = 0;
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
}

void Entity::tick(const int dt) {
    std::stringstream ss;
    ss << "LookVec = x:" << lookVec.getX() << " y:" << lookVec.getY();
    Logger::warn(ss.str());
}



