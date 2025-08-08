//
// Created by jkirc on 8/7/2025.
//

#ifndef FOOTBALL_H
#define FOOTBALL_H
#include "../../../entity/Entity.h"


class Football : public Entity {
public:
    Football();
    void throwBall(Vector2D pos, Vector2D velocity);
private:

};



#endif //FOOTBALL_H
