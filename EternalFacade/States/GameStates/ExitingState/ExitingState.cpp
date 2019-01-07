//
// Created by Tyler Wilson on 3/13/18.
//

#include "ExitingState.hpp"

using namespace GameStates;

ExitingState::ExitingState(){
    OnEnter();
}

ExitingState::~ExitingState() {
    OnExit();
}

void ExitingState::OnEnter() {
    stateName = "Exiting";
}

void ExitingState::OnExit() {

}

void ExitingState::Update() {

}

void ExitingState::Draw(SDL_Renderer* renderer) {

}
