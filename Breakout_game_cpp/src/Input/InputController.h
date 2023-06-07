//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_INPUTCONTROLLER_H
#define SDL2TEST_INPUTCONTROLLER_H


#include "InputAction.h"

class GameController;

class InputController
{
public:

    InputController();
    void Init(InputAction quitAction);
    void Update(uint32_t dt);
    void SetGameController(GameController* controller);

private:
    InputAction mQuit;
    GameController* mnoptrCurrentController;
};


#endif //SDL2TEST_INPUTCONTROLLER_H
