//
// Created by jkirc on 5/28/2025.
//

#include "RenderEngine.h"

RenderEngine::RenderEngine(Scene* scene, sf::RenderWindow* window) {
    this->currentScene = scene;
    this->window = window;
    this->renderDispatcher = RenderDispatcher();

    // renderDispatcher.registerRenderer(typeid(Entity), []() -> Renderer* {
    //     return new EntityRenderer();
    // }
    //     );
}

void RenderEngine::draw() {
    window->clear();

    window->display();
}
