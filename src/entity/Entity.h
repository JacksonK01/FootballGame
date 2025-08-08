//
// Created by jkirc on 5/28/2025.
//

#ifndef ENTITY_H
#define ENTITY_H
#include <string>

#include "../utils/Rectangle.h"
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
    [[nodiscard]] Rectangle getBoundingBox() const { return boundingBox; }

    virtual ~Entity() = default;

    //Given from player.
    void directionInput(const Vector2D direction);
    void mouseInput(const Vector2D pos);
    //When the entity is clicked on
    void onClicked(const Vector2D pos);
    void tick(const int dt);

private:
    Vector2D lookVec;
    int x;
    int y;
    int speed;
    Rectangle boundingBox;
};



#endif //ENTITY_H
