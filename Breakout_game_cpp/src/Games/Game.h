//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_GAME_H
#define SDL2TEST_GAME_H

#include <string>
#include <stdint.h>

class GameController;
class Screen;

class Game
{
public:
    virtual ~Game(){}
    virtual void Init(GameController& controller) = 0;
    virtual void Update(uint32_t dt) = 0;
    virtual void Draw(Screen& screen) = 0;
    virtual const std::string& GetName() const = 0;
};

#endif //SDL2TEST_GAME_H
