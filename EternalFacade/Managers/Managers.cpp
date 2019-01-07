//
// Created by Tyler Wilson on 11/1/18.
//

#include "Managers.hpp"

Managers::GameManager::GameManager() {
    stateManager = Managers::StateManager();
    inputManager = Managers::InputManager();
    textureManager = Managers::TextureManager();
}