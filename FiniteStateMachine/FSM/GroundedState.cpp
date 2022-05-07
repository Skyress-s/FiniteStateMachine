#include "GroundedState.h"

#include <iostream>

void GroundedState::Update() {
    std::cout << "Update Ground State!" << std::endl;
}

void GroundedState::Enter() {
    std::cout << "Enter Ground State!" << std::endl;
}

void GroundedState::Exit() {
    std::cout << "Exit Ground State!" << std::endl;
}
