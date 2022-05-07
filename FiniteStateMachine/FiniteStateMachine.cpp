
#include <cstdio>
#include <ctime>
#include <string>
#include "Windows.h"
#include <chrono>
#include <iostream>

#include "FSM/AirState.h"
#include "FSM/FSM.h"
#include "Timer/Timer.h"
using std::cout;
using std::endl;

#include "FSM/GroundedState.h"

long long ms = 150;

int main()
{
    FSM ffsm = FSM(new GroundedState());
    for (int i = 0; i < 10; ++i) {
        Timer timer;
        //logic start
        ffsm.Update();

        if (i == 3) {
            ffsm.PushState(new AirState());
        }

        if (i == 7) {
            ffsm.PopState();
        }
        
        //logic end
        // cout << i << endl;
        Sleep(ms - timer.Stop());
    }
    ffsm.PopState();

    return 0;
   
    
}
