//
// Created by jkirc on 5/31/2025.
//

#ifndef ENTITYRENDERER_H
#define ENTITYRENDERER_H
#include <SFML/Graphics.hpp>

#include "../Renderer.h"


class EntityRenderer final : public Renderer<Entity> {
public:
    EntityRenderer();

    void render(const Entity* entity, sf::RenderWindow& window) override;
};



#endif //ENTITYRENDERER_H
