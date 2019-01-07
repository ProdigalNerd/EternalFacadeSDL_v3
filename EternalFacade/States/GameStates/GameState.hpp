//
// Created by Tyler Wilson on 3/13/18.
//

#ifndef ETERNAL_FACADE_SDL_V2_GAMESTATE_HPP
#define ETERNAL_FACADE_SDL_V2_GAMESTATE_HPP

#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include <string>

namespace GameStates {

    class GameState {
    public:
        GameState();

        ~GameState();

        virtual void OnEnter() = 0;

        virtual void OnExit() = 0;

        virtual void Update() = 0;

        virtual void Draw(SDL_Renderer *renderer) = 0;

        std::string GetStateName();

    protected:
        std::string stateName;
    };

}

#endif //ETERNAL_FACADE_SDL_V2_GAMESTATE_HPP
