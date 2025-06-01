//
// Created by jkirc on 5/28/2025.
//

#include "GameEngine.h"

#include "../game/test/TestScene.h"

GameEngine::GameEngine()
    : inputManager(), player()
{
    inputManager.createKeyPressedEvent(sf::Keyboard::Key::A, [this]() {
       player.setX(player.getX() - player.getSpeed());
    });

    inputManager.createKeyPressedEvent(sf::Keyboard::Key::D, [this]() {
        player.setX(player.getX() + player.getSpeed());
    });

    inputManager.createKeyPressedEvent(sf::Keyboard::Key::W, [this]() {
        player.setY(player.getY() - player.getSpeed());
    });

    inputManager.createKeyPressedEvent(sf::Keyboard::Key::S, [this]() {
        player.setY(player.getY() + player.getSpeed());
    });

    //TODO Make sure to delete this instance of memory when overriding to new scene
    currentScene = new TestScene(&player);
}

Scene* GameEngine::getCurrentScene() {
    return this->currentScene;
}

void GameEngine::tick() {
    inputManager.tick();
}


