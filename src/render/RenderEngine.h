//
// Created by jkirc on 5/28/2025.
//

#ifndef RENDERENGINE_H
#define RENDERENGINE_H
#include "RenderDispatcher.h"
#include "../scenes/Scene.h"
#include "SFML/Graphics/RenderWindow.hpp"


class RenderEngine {
public:
    explicit RenderEngine(Scene* scene, sf::RenderWindow& window);
    void draw();
private:
    Scene* currentScene;
    //lastScene used to check if a scene changed.
    Scene* lastScene;
    sf::RenderWindow& window;
    RenderDispatcher renderDispatcher;

    bool hasSceneChanged();
    void setUpRenderLayers();
};



#endif //RENDERENGINE_H
