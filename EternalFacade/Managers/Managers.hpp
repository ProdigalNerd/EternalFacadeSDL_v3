//
// Created by Tyler Wilson on 11/1/18.
//

#ifndef ETERNAL_FACADE_SDL_V2_MANAGERS_HPP
#define ETERNAL_FACADE_SDL_V2_MANAGERS_HPP

#include <Managers/StateManager/StateManager.hpp>
#include <Managers/InputManager/InputManager.hpp>
#include <Managers/TextureManager/TextureManager.hpp>

namespace Managers {
    class GameManager {
    public:
        GameManager();
        ~GameManager();

        Managers::InputManager inputManager;
        Managers::StateManager stateManager;
        Managers::TextureManager textureManager;
    };
}


#endif //ETERNAL_FACADE_SDL_V2_MANAGERS_HPP
