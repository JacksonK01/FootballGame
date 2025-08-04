//
// Created by jkirc on 5/28/2025.
//

#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include <vector>
#include <functional>
#include "../../cmake-build-debug/_deps/sfml-src/src/SFML/Window/InputImpl.hpp"

class InputManager {
public:
    InputManager();
    void createKeyPressedEvent(sf::Keyboard::Key key, const std::function<void()>& action);
    void createMouseButtonEvent(sf::Mouse::Button button, const std::function<void()>& action);
    void tick();
private:
    std::vector<std::function<void()>> keyPressedEvents;
};


#endif //INPUTMANAGER_H
