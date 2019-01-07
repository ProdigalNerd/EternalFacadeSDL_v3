//
// Created by Tyler Wilson on 11/1/18.
//

#ifndef ETERNAL_FACADE_SDL_V2_ETERNALFACADE_HPP
#define ETERNAL_FACADE_SDL_V2_ETERNALFACADE_HPP


// TODO: Move includes for SDL files into separate include file for easy loading

#include <stdio.h>
#include <iostream>

#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include <SDL2_ttf/SDL_ttf.h>
#include <libconfig.h++>

#include <Managers/Managers.hpp>
#include "DataModels/ScreenConfig.hpp"

class EternalFacade {
public:
    EternalFacade();
    ~EternalFacade();

    Managers::GameManager* gameManager;
private:
    void LoadConfigVars();
    void InitializeWindow();
    void InitializeTextures();
    void RunEngine();
    bool IsRunning();
    void OnSDLEvent(SDL_Event& event);

    ScreenConfig cfg;
    SDL_Window* window;
    SDL_Renderer* renderer;
};


#endif //ETERNAL_FACADE_SDL_V2_ETERNALFACADE_HPP
