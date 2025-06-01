#include <iostream>

#include "Game.h"


int main()
{
    Game game = Game();
    game.run();

    std::cout << "Type: " << typeid(Game).name();
}
