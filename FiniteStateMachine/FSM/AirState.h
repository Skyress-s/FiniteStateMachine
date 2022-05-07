#pragma once
#include "BaseState.h"

class AirState : public  BaseState {
public:
    void Update() override;
    void Enter() override;
    void Exit() override;

};
