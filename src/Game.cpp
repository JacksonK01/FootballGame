//
// Created by jkirc on 5/28/2025.
//

#include "Game.h"
#include <SFML/Graphics.hpp>
#include "../cmake-build-debug/_deps/sfml-src/src/SFML/Window/InputImpl.hpp"

Game::Game()
    :
    gameEngine(),
    renderEngine(gameEngine.getCurrentScene(), &window) {

}

void Game::run() {
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                // Gets triggered when window WANTS to close
                // Could be useful for saving data before exiting the game
                window.close();
            }
        }

        gameEngine.tick();
        renderEngine.draw();
    }
}
