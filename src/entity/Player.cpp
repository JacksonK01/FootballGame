//
// Created by jkirc on 6/8/2025.
//

#include "Player.h"

#include "../utils/Logger.h"

Player::Player(Entity* linkedEntity): linkedEntity(linkedEntity) {}

void Player::setEntity(Entity* linkedEntity) {
    this->linkedEntity = linkedEntity;
}

void Player::directionInput(const Vector2D direction) const {
    if (linkedEntity) {
        this->linkedEntity->directionInput(direction);
    } else {
        Logger::warn("Player is not linked to an Entity.");
    }
}

void Player::mousePressed(const Vector2D pos) const {
    if (linkedEntity) {
        this->linkedEntity->mouseInput(pos);
    } else {
        Logger::warn("Player is not linked to an Entity.");
    }
};

void Player::tick(const int dt) {
    if (linkedEntity) {
        this->linkedEntity->tick(dt);
    } else {
        Logger::warn("Player is not linked to an Entity.");
    }
}


