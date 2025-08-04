//
// Created by jkirc on 5/28/2025.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "../scenes/Scene.h"
#include "../input/InputManager.h"
#include "../entity/Entity.h"
#include "../entity/Player.h"
#include "SFML/Graphics/RenderWindow.hpp"

class GameEngine {
public:
    GameEngine(sf::RenderWindow& window);

    void tick();
    [[nodiscard]] Scene* getCurrentScene();
private:
    Scene* currentScene;
    InputManager inputManager;
    Player player1;

    //Here for mouse click event
    sf::RenderWindow& window;
};



#endif //GAMEENGINE_H
