//
// Created by jkirc on 5/28/2025.
//

#ifndef SCENE_H
#define SCENE_H
#include <vector>

#include "../entity/Entity.h"


class Scene {
public:
    virtual ~Scene() = default;
    std::vector<Entity*>& getAllEntities();
protected:
    std::vector<Entity*> allEntity;
};



#endif //SCENE_H
