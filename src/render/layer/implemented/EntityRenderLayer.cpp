//
// Created by jkirc on 6/1/2025.
//

#include "EntityRenderLayer.h"
#include "../LayerPriorities.h"

EntityRenderLayer::EntityRenderLayer()
    : RenderLayer(LayerPriorities::ENTITY, "Entity") {}

void EntityRenderLayer::addEntityToRender(const Entity* entity) {
    renderItems.push_back(entity);
}

