//
// Created by Tyler Wilson on 3/15/18.
//

#ifndef ETERNAL_FACADE_SDL_V2_PLAYINGSTATE_HPP
#define ETERNAL_FACADE_SDL_V2_PLAYINGSTATE_HPP

#include <list>

#include "../GameState.hpp"

namespace GameStates {

    class PlayingState : public GameState {
    public:
        PlayingState();

        ~PlayingState();

        void OnEnter() override;

        void OnExit() override;

        void Update() override;

        void Draw(SDL_Renderer *renderer) override;

    private:
        // Initialize Player
        // TODO make dynamic with new character screen
        void CreatePlayerObject();

        void InitializeViews();

        // TODO: std::list<IView *> views;
        // TODO: Player *player;
    };

}


#endif //ETERNAL_FACADE_SDL_V2_PLAYINGSTATE_HPP
