//
// Created by jkirc on 5/31/2025.
//

#include "EntityRenderer.h"

EntityRenderer::EntityRenderer() = default;

void EntityRenderer::render(Entity* entity, sf::RenderWindow* window) {
    sf::RectangleShape entityRender(sf::Vector2f(100.0f, 100.0f));
    entityRender.setFillColor(sf::Color::White);

    entityRender.move(sf::Vector2f(static_cast<float>(entity->getX()), static_cast<float>(entity->getY())));

    window->draw(entityRender);
}


