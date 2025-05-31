//
// Created by jkirc on 5/28/2025.
//

#include "GameEngine.h"

GameEngine::GameEngine() {
    this->currentScene = Scene();
}

Scene* GameEngine::getCurrentScene() {
    return &this->currentScene;
}

