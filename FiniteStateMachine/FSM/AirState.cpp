#include "AirState.h"

#include <iostream>

void AirState::Update() {
    std::cout << "Update Air State!" << std::endl;
}

void AirState::Enter() {
    std::cout << "Enter Air State!" << std::endl;
}

void AirState::Exit() {
    std::cout << "Exit Air State!" << std::endl;
}
