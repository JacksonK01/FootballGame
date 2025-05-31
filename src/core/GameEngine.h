//
// Created by jkirc on 5/28/2025.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "../game/Scene.h"


class GameEngine {
public:
    GameEngine();
    [[nodiscard]] Scene* getCurrentScene();
private:
    Scene currentScene;
};



#endif //GAMEENGINE_H
