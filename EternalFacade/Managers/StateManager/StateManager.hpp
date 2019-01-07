//
// Created by Tyler Wilson on 3/14/18.
//

#ifndef ETERNAL_FACADE_SDL_V2_STATEMANAGER_HPP
#define ETERNAL_FACADE_SDL_V2_STATEMANAGER_HPP

#include <list>

class IGame;
class GameState;

namespace Managers {
    class StateManager {
    public:
        //explicit StateManager(IGame *game);
        StateManager();

        ~StateManager();

        void GoToState(GameState *state);

        void GoToPreviousState();

        GameState* GetState();
        void SetState(GameState* newState);

    private:
        std::list<GameState *> stateStack;
        IGame *game_ref;

        GameState* currentState;
    };
}


#endif //ETERNAL_FACADE_SDL_V2_STATEMANAGER_HPP
