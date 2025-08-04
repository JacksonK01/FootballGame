//
// Created by jkirc on 5/31/2025.
//

#ifndef RENDERER_H
#define RENDERER_H
#include <iostream>

#include "../../entity/Entity.h"
#include <SFML/Graphics.hpp>

#include "IRenderer.h"

template<typename T>
class Renderer : public IRenderer {
public:
    void renderGeneric(const void* toRender, sf::RenderWindow& window) override {
        const T* toRenderTyped = static_cast<const T*>(toRender);

        this->render(toRenderTyped, window);
    }
    virtual void render(const T* toRender, sf::RenderWindow& window) = 0;
};



#endif //RENDERER_H
