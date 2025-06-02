//
// Created by jkirc on 5/31/2025.
//

#ifndef ENTITYRENDERER_H
#define ENTITYRENDERER_H
#include "../../entity/Entity.h"
#include <SFML/Graphics.hpp>

#include "Renderer.h"


class EntityRenderer : public Renderer {
public:
    EntityRenderer();

    void render(Entity* entity, sf::RenderWindow* window) override;
};



#endif //ENTITYRENDERER_H
