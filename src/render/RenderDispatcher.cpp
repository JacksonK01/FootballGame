//
// Created by jkirc on 5/31/2025.
//

#include "RenderDispatcher.h"

#include <utility>

#include "../utils/Logger.h"
#include "layer/IRenderLayer.h"

//Distributes the proper renderer as an instance (Possible change this to be on the fly)
RenderDispatcher::RenderDispatcher()
    :rendererRegistry() {
    Logger::initialize("(RenderDispatcher) Initialized");
};

void RenderDispatcher::registerRenderer(const std::type_index& type, IRenderer* renderer) {
    rendererRegistry[type] = std::move(renderer);
}

IRenderer* RenderDispatcher::getRenderer(const std::type_info &type) {
    return rendererRegistry[type];
};

