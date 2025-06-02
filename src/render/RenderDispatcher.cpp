//
// Created by jkirc on 5/31/2025.
//

#include "RenderDispatcher.h"

RenderDispatcher::RenderDispatcher()
    :rendererRegistry() {};

void RenderDispatcher::registerRenderer(std::type_index type, std::function<Renderer*()> constructor) {
    rendererRegistry[type] = constructor;
}

Renderer *RenderDispatcher::getRenderer(Entity *entity) {
    return rendererRegistry[typeid(*entity)]();
}

