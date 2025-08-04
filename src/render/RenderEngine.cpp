//
// Created by jkirc on 5/28/2025.
//

#include "RenderEngine.h"

#include "renderers/implemented/EntityRenderer.h"

//Pulls information from the Scene and properly distributes layers to be rendered
RenderEngine::RenderEngine(Scene* scene, sf::RenderWindow& window)
    : window(window), renderDispatcher() {
    this->currentScene = scene;
    this->lastScene = scene;

    Logger::initialize("(RenderEngine) Finished creating members");

    renderDispatcher.registerRenderer(typeid(Entity), new EntityRenderer());

}

//TODO build better system for inner for loop, make map to hold the renderers
void RenderEngine::draw() {
    window.clear();

    std::vector<IRenderLayer*>& layers = currentScene->getRenderLayers();

    for (IRenderLayer* layer: layers) {
        std::vector<const void*> items = layer->getRenderItems();

        for (const void* item : items) {
            renderDispatcher.getRenderer(layer->getType())->renderGeneric(item, window);
        }
    }

    window.display();
}

bool RenderEngine::hasSceneChanged() {
    return false;
}

void RenderEngine::setUpRenderLayers() {

}

