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
    GameEngine gameEngine;
    RenderEngine renderEngine;
};

#endif //GAME_H
