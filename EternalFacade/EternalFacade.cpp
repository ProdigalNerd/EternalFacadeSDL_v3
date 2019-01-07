//
// Created by Tyler Wilson on 11/1/18.
//

#define APPTITLE         "Eternal Facade"

#include <States/GameStates/RunningState/RunningState.hpp>
#include <States/GameStates/MainMenuState/MainMenuState.hpp>
#include "EternalFacade.hpp"

EternalFacade::EternalFacade() {
    gameManager = new Managers::GameManager();
    gameManager->stateManager.SetState(new GameStates::RunningState());
    LoadConfigVars();
    InitializeWindow();
    RunEngine();
}

void EternalFacade::LoadConfigVars() {
    libconfig::Config _screenCfg;
    // Load the config file to define screen properties
    try {
        _screenCfg.setIncludeDir("Resources/Configs");
        std::string base_path = SDL_GetBasePath();
        const char *filename = base_path.append("Configs/main_screen.cfg").c_str();
        _screenCfg.readFile(filename);

        const libconfig::Setting &root = _screenCfg.getRoot();

        cfg.width = root["width"];
        cfg.height = root["height"];
        cfg.tile_size = root["tile_size"];
        cfg.video_style = root["video_style"].c_str();
    }
    catch (const libconfig::FileIOException &fioex) {
        std::cerr << "I/O error while reading file." << std::endl;
    }
    catch (const libconfig::ParseException &pex) {
        std::cerr << "Parse error at " << pex.getFile() << ":" << pex.getLine()
                  << " - " << pex.getError() << std::endl;
    }
}

void EternalFacade::InitializeTextures() {
    std::string basePath = SDL_GetBasePath();
    gameManager->textureManager.CreateTextureForKeyWithPath("main", basePath.append("EternalFacadeTiles.png"), renderer);
}

void EternalFacade::InitializeWindow() {
    // Initialize the SDL library.
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        fprintf(stderr, "SDL_Init() failed: %s\n", SDL_GetError());
    }

    // initialize the sdl font library
    if (TTF_Init() < 0) {
        fprintf(stderr, "TTF_Init() failed : %s\n", TTF_GetError());
    }

    window = SDL_CreateWindow(APPTITLE,
                              SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              cfg.width, cfg.height,
                              SDL_WINDOW_SHOWN);

    if (window != nullptr) {
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    }

    // renderer is required by texture manager so wait until now to initialize textures
    // It also needs to be initialized before the state is changed since the texture manager gets passed around
    InitializeTextures();

    if (renderer != nullptr) {
        gameManager->stateManager.SetState(new GameStates::MainMenuState());
    }
}

void EternalFacade::RunEngine() {
    // Enter the SDL event loop.
    SDL_Event event;

    while (IsRunning())
    {
        gameManager->inputManager.Update();

        while (SDL_PollEvent(&event)) {
            OnSDLEvent(event);
        }

        /* Select the color for drawing. It is set to red here. */
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

        SDL_RenderClear(renderer);

        // Do your drawing here
        GameStates::GameState* currentState = gameManager->stateManager.GetState();
        currentState->Update();
        currentState->Draw(renderer);
        delete currentState;

        SDL_RenderPresent(renderer);
    }
}

void EternalFacade::OnSDLEvent(SDL_Event& event) {
    switch (event.type) {
        case SDL_QUIT:
            gameManager->stateManager.SetState(new GameStates::ExitingState());
            break;
        case SDL_MOUSEMOTION:
            gameManager->inputManager.SetMouseCoords((float)event.motion.x, (float)event.motion.y);
            break;
        case SDL_KEYDOWN:
            gameManager->inputManager.KeyPress(event.key.keysym.sym);
            break;
        case SDL_KEYUP:
            gameManager->inputManager.KeyRelease(event.key.keysym.sym);
            break;
        case SDL_MOUSEBUTTONDOWN:
            gameManager->inputManager.KeyPress(event.button.button);
            break;
        case SDL_MOUSEBUTTONUP:
            gameManager->inputManager.KeyRelease(event.button.button);
            break;
        default:
            break;
    }
}

bool EternalFacade::IsRunning() {
    GameStates::GameState* currentState = gameManager->stateManager.GetState();
    return (currentState->GetStateName() != "Exiting");
}