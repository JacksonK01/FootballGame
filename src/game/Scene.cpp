//
// Created by jkirc on 5/28/2025.
//

#include "Scene.h"

Scene::Scene() = default;

std::vector<Entity *>& Scene::getAllEntities() {
    return allEntity;
}
