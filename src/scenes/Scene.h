//
// Created by jkirc on 5/28/2025.
//

#ifndef SCENE_H
#define SCENE_H
#include <vector>

#include "../entity/Entity.h"
#include "../render/layer/RenderLayer.h"

class Scene {
public:
    virtual ~Scene() = default;
    //Should return a SORTED version
    std::vector<IRenderLayer*>& getRenderLayers();

protected:
    std::vector<IRenderLayer*> renderLayers;
};



#endif //SCENE_H
