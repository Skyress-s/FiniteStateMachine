#pragma once
#include "BaseState.h"

class GroundedState : public BaseState {
protected:
public:
    GroundedState(){ }
    virtual ~GroundedState(){ }
    void Update() override;
    void Enter() override;
    void Exit() override;

};
