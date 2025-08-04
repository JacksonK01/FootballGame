//
// Created by jkirc on 5/31/2025.
//

#ifndef TESTSCENE_H
#define TESTSCENE_H
#include "../Scene.h"
#include "../../entity/Entity.h"
#include "../../entity/Player.h"


class TestScene : public Scene {
public:
    explicit TestScene(Player& player);
private:
    Player& player;
};



#endif //TESTSCENE_H
