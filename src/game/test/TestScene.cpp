//
// Created by jkirc on 5/31/2025.
//

#include "TestScene.h"

TestScene::TestScene(Entity *player) {
    this->player = player;

    allEntity.emplace_back(player);
}
