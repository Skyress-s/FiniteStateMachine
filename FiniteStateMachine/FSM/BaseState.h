#pragma once
#include <string>

class BaseState {
protected:
    BaseState() = default;
    
    ~BaseState() = default;
public:

    virtual void Update() = 0;
    virtual void Enter() = 0;
    virtual void Exit() = 0;
    
};
