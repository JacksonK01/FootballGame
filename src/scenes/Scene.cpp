//
// Created by jkirc on 5/28/2025.
//

#include "Scene.h"

#include <algorithm>

std::vector<IRenderLayer*>& Scene::getRenderLayers() {

    std::sort(renderLayers.begin(), renderLayers.end(),
        [](const IRenderLayer* r1, const IRenderLayer* r2) {
            return r1->getPriority() < r2->getPriority();
        });

    return renderLayers;
}

