//
// Created by Tyler Wilson on 3/13/18.
//

#include "RunningState.hpp"

using namespace GameStates;

RunningState::RunningState() {
    OnEnter();
}

RunningState::~RunningState() {
    OnExit();
}

void RunningState::OnEnter() {
    stateName = "Running";
}

void RunningState::OnExit() {

}

void RunningState::Update() {

}

void RunningState::Draw(SDL_Renderer* renderer) {

}
