//
// Created by jkirc on 5/28/2025.
//

#ifndef ENTITY_H
#define ENTITY_H
#include <string>



class Entity {
public:
    Entity();

    [[nodiscard]] std::string getType() const;

    [[nodiscard]] int getX() const;
    void setX(int x);

    [[nodiscard]] int getY() const;
    void setY(int y);

    [[nodiscard]] int getSpeed() const;

    virtual ~Entity() = default;

private:
    std::string type;
    int x;
    int y;
    int speed;
};



#endif //ENTITY_H
