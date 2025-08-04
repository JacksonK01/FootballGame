//
// Created by jkirc on 6/8/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"
#include "../utils/Logger.h"

//This class purely controls an entity.
class Player {
public:
    Player() = default;
    explicit Player(Entity* linkedEntity);

    [[nodiscard]] const Entity& getEntity() const {
        if (!linkedEntity) {
            Logger::error("Player is not linked to an Entity.");
        }
        return *linkedEntity;
    }

    void setEntity(Entity* linkedEntity);
    void directionInput(const Vector2D direction) const;
    void mousePressed(const Vector2D pos) const;
    void tick(const int dt);

private:
    //Has to be direct pointer, references need to be init-ed
    Entity* linkedEntity = nullptr;
};



#endif //PLAYER_H
