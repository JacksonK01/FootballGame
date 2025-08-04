//
// Created by jkirc on 5/28/2025.
//

#ifndef GAME_H
#define GAME_H
#include "core/GameEngine.h"
#include "render/RenderEngine.h"

class Game {
public:
    Game();
    void run();

private:
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Game");
    GameEngine gameEngine;
    RenderEngine renderEngine;
};

#endif //GAME_H
