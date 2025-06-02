//
// Created by jkirc on 5/28/2025.
//

#ifndef RENDERENGINE_H
#define RENDERENGINE_H
#include "RenderDispatcher.h"
#include "../game/Scene.h"
#include "renderers/EntityRenderer.h"
#include "SFML/Graphics/RenderWindow.hpp"


class RenderEngine {
public:
    explicit RenderEngine(Scene* scene, sf::RenderWindow* window);
    void draw();
private:
    Scene* currentScene;
    sf::RenderWindow* window;
    RenderDispatcher renderDispatcher;
};



#endif //RENDERENGINE_H
