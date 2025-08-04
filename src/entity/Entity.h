//
// Created by jkirc on 5/28/2025.
//

#ifndef ENTITY_H
#define ENTITY_H
#include <string>

#include "../utils/math/Vector2D.h"


//Base for positions. Anything can be an entity. Specifically in game objects.
class Entity {
public:
    Entity();

    [[nodiscard]] int getX() const;
    void setX(int x);

    [[nodiscard]] int getY() const;
    void setY(int y);

    [[nodiscard]] int getSpeed() const;

    virtual ~Entity() = default;

    //Given from player.
    void directionInput(const Vector2D direction);
    void mouseInput(const Vector2D pos);
    void tick(const int dt);

private:
    Vector2D lookVec;
    int x;
    int y;
    int speed;
};



#endif //ENTITY_H
