//
// Created by jkirc on 6/5/2025.
//

#ifndef IRENDERER_H
#define IRENDERER_H
#include <SFML/Graphics.hpp>


class IRenderer {
public:
    virtual ~IRenderer() = default;
    //Used to cast toRender to type
    //Has to be a Pointer not a reference due to it being a void type
    virtual void renderGeneric(const void* toRender, sf::RenderWindow& window) = 0;
};



#endif //IRENDERER_H
