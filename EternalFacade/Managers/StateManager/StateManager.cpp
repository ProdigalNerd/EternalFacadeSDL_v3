
//
// Created by Tyler Wilson on 3/14/18.
//

#include "StateManager.hpp"

// #include "../../Utils/IGame/IGame.hpp"

using namespace Managers;

StateManager::StateManager() {
    currentState = nullptr;
}

StateManager::~StateManager() {

}

void StateManager::GoToState(GameState *state) {
    stateStack.push_front(state);
    SetState(state);
}

void StateManager::GoToPreviousState() {
    if (!stateStack.empty()) {
        SetState(stateStack.front());

        stateStack.pop_front();
    }
}

void StateManager::SetState(GameState *newState) {
    currentState = newState;
}

GameState *StateManager::GetState() {
    return currentState;
}
