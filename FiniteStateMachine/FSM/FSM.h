#pragma once
#include <vector>

#include "BaseState.h"

class FSM {
public:
    FSM(BaseState* startState) {
        PushState(startState);
        // m_state.insert(m_state.begin(), startState);
    }
    ~FSM(){}

    void PushState(BaseState* newState) {
        m_state.insert(m_state.begin(), newState);
        m_state[0]->Enter();
    }
    void PopState() {
        m_state[0]->Exit();
        m_state.erase(m_state.begin());
    }

    void Update(){m_state[0]->Update(); }
private:
    std::vector<BaseState*> m_state;
};
