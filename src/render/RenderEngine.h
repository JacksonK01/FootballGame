//
// Created by jkirc on 5/28/2025.
//

#ifndef RENDERENGINE_H
#define RENDERENGINE_H
#include "../game/Scene.h"


class RenderEngine {
public:
    explicit RenderEngine(Scene* scene);
private:
    Scene* currentScene;
};



#endif //RENDERENGINE_H
