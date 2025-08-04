//
// Created by jkirc on 6/7/2025.
//

#ifndef BUTTON_H
#define BUTTON_H
#include "IUIElement.h"


class Button : public IUIElement {

    bool wasPressed();
    void onPressedEvent();
};



#endif //BUTTON_H
