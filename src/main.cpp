#include <iostream>

#include "Game.h"
#include "utils/Logger.h"


int main()
{
    Game game = Game();
    game.run();

    Logger::warn("Game Ended");
}
