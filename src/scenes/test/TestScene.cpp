//
// Created by jkirc on 5/31/2025.
//

#include "TestScene.h"

#include "../../render/layer/implemented/EntityRenderLayer.h"

TestScene::TestScene(Player& player)
    : player(player) {
    auto* entityLayer = new EntityRenderLayer();

    player.setEntity(new Entity());

    entityLayer->addEntityToRender(&player.getEntity());

    renderLayers.push_back(entityLayer);
}
