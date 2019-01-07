cmake_minimum_required(VERSION 3.9)
project(Eternal_Facade_SDL_V2)

set(CMAKE_CXX_STANDARD 11)

SET(GCC_COVERAGE_LINK_FLAGS    "-lconfig++")

#Set your directories.  The dot representes the root application folder.
#Thus my the path to my domain folder:
set(APP_DOMAIN ./EternalFacade)

#Include the directories and now your cpp files will recognize your headers
include_directories(${APP_DOMAIN})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

include_directories(${SDL2_INCLUDE_DIR})
include_directories(${SDL2_IMAGE_INCLUDE_DIR})

find_package(SDL2 REQUIRED)
find_package(SDL2_TTF REQUIRED)
find_package(SDL2_image REQUIRED >=2.0.0)

find_library(CONFIG++_LIBRARY NAMES config++ PATH /usr/lib /usr/local/lib)

add_executable(Eternal_Facade_SDL_V2
        main.cpp EternalFacade/Managers/Managers.cpp EternalFacade/Managers/Managers.hpp
        EternalFacade/Managers/InputManager/InputManager.cpp EternalFacade/Managers/InputManager/InputManager.hpp
        EternalFacade/Managers/StateManager/StateManager.cpp EternalFacade/Managers/StateManager/StateManager.hpp
        EternalFacade/Managers/TextureManager/TextureManager.cpp EternalFacade/Managers/TextureManager/TextureManager.hpp
        EternalFacade/EternalFacade.cpp EternalFacade/EternalFacade.hpp
        EternalFacade/DataModels/ScreenConfig.hpp
        EternalFacade/DataModels/Enums/TileType.hpp
        EternalFacade/States/GameStates/GameState.cpp
        EternalFacade/States/GameStates/GameState.hpp
        EternalFacade/States/GameStates/GameStateIncludes.hpp
        EternalFacade/States/GameStates/ExitingState/ExitingState.cpp EternalFacade/States/GameStates/ExitingState/ExitingState.hpp
        EternalFacade/States/GameStates/MainMenuState/MainMenuState.cpp EternalFacade/States/GameStates/MainMenuState/MainMenuState.hpp
        EternalFacade/States/GameStates/RunningState/RunningState.cpp EternalFacade/States/GameStates/RunningState/RunningState.hpp
        EternalFacade/States/GameStates/PlayingState/PlayingState.cpp EternalFacade/States/GameStates/PlayingState/PlayingState.hpp)
target_link_libraries(Eternal_Facade_SDL_V2 ${SDL2_LIBRARY})
target_link_libraries(Eternal_Facade_SDL_V2 ${SDL2_IMAGE_LIBRARY})
target_link_libraries(Eternal_Facade_SDL_V2 ${SDL2_TTF_LIBRARY})
target_link_libraries(Eternal_Facade_SDL_V2 ${CONFIG++_LIBRARY})

add_custom_command(TARGET Eternal_Facade_SDL_V2 PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/Resources $<TARGET_FILE_DIR:Eternal_Facade_SDL_V2>)