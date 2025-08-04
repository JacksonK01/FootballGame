//
// Created by jkirc on 5/28/2025.
//

#include "InputManager.h"

#include "../utils/Logger.h"

InputManager::InputManager() = default;

void InputManager::createKeyPressedEvent(sf::Keyboard::Key key, const std::function<void()>& action) {
    auto event = [key, action]() {
        if(sf::priv::InputImpl::isKeyPressed(key)) {
            action();
        }
    };

    keyPressedEvents.emplace_back(event);
}

void InputManager::createMouseButtonEvent(sf::Mouse::Button button, const std::function<void()>& action) {
    auto event = [button, action]() {
        if (sf::Mouse::isButtonPressed(button)) {
            action();
        }
    };

    keyPressedEvents.emplace_back(event);
};

void InputManager::tick() {
    std::for_each(keyPressedEvents.begin(), keyPressedEvents.end(), [](auto& event) {
        event();
    });
}



