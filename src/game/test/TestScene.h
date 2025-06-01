//
// Created by jkirc on 5/31/2025.
//

#ifndef TESTSCENE_H
#define TESTSCENE_H
#include "../Scene.h"
#include "../../entity/Entity.h"


class TestScene : public Scene {
public:
    explicit TestScene(Entity* player);
private:
    Entity* player;
};



#endif //TESTSCENE_H
