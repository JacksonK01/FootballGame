//
// Created by jkirc on 5/28/2025.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "../game/Scene.h"
#include "../input/InputManager.h"
#include "../entity/Entity.h"

class GameEngine {
public:
    GameEngine();

    void tick();
    [[nodiscard]] Scene* getCurrentScene();
private:
    Scene* currentScene;
    InputManager inputManager;
    Entity player;
};



#endif //GAMEENGINE_H
