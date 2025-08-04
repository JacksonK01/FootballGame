//
// Created by jkirc on 5/28/2025.
//

#include "GameEngine.h"

#include "../scenes/test/TestScene.h"

GameEngine::GameEngine(sf::RenderWindow& window)
    : inputManager(), player1(), window(window)
{
    inputManager.createKeyPressedEvent(sf::Keyboard::Key::A, [this]() {
       player1.directionInput(Vector2D(-1, 0));
    });

    inputManager.createKeyPressedEvent(sf::Keyboard::Key::D, [this]() {
        player1.directionInput(Vector2D(1, 0));
    });

    inputManager.createKeyPressedEvent(sf::Keyboard::Key::W, [this]() {
        player1.directionInput(Vector2D(0, -1));
    });

    inputManager.createKeyPressedEvent(sf::Keyboard::Key::S, [this]() {
        player1.directionInput(Vector2D(0, 1));
    });

    inputManager.createMouseButtonEvent(sf::Mouse::Button::Left, [this]() {
        //Converts into my version of a vector
        const sf::Vector2i mousePos = sf::Mouse::getPosition(this->window);
        player1.mousePressed(Vector2D(mousePos.x, mousePos.y));
    });

    Logger::initialize("(GameEngine) Input Manager set up");

    //TODO Make sure to delete this instance of memory when overriding to new scene
    currentScene = new TestScene(player1);

    Logger::initialize("(GameEngine) Initialized");
}

Scene* GameEngine::getCurrentScene() {
    return this->currentScene;
}

void GameEngine::tick() {
    inputManager.tick();
    player1.tick(1);
}


