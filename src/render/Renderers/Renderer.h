//
// Created by jkirc on 5/31/2025.
//

#ifndef RENDERER_H
#define RENDERER_H
#include "../../entity/Entity.h"
#include <SFML/Graphics.hpp>


class Renderer {
public:
    virtual ~Renderer() = default;

    virtual void render(Entity* entity, sf::RenderWindow* window) = 0;
};



#endif //RENDERER_H
