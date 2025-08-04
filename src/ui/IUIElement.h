//
// Created by jkirc on 6/7/2025.
//

#ifndef IUIELEMENT_H
#define IUIELEMENT_H
#include "../utils/Rectangle.h"
#include "SFML/Graphics/RectangleShape.hpp"

class IUIElement {
public:
    Rectangle getBoundingBox();
};

#endif //IUIELEMENT_H
