//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_ARCADESCENE_H
#define SDL2TEST_ARCADESCENE_H


#include "Scene.h"
#include <memory>

enum eGame
{
    TETRIS = 0,
    BREAK_OUT,
    ASTEROIDS,
    PACMAN,
    NUM_GAMES
};

class Screen;

class ArcadeScene: public Scene
{
public:
    ArcadeScene();
    virtual void Init() override;
    virtual void Update(uint32_t dt) override;
    virtual void Draw(Screen& theScreen) override;
    virtual const std::string& GetSceneName() const override;

private:
    std::unique_ptr<Scene> GetScene(eGame game);
};


#endif //SDL2TEST_ARCADESCENE_H
