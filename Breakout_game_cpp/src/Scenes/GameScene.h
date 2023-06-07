//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_GAMESCENE_H
#define SDL2TEST_GAMESCENE_H


#include "Scene.h"
#include "../Games/Game.h"
#include <memory>

class GameScene: public Scene
{
public:

    GameScene(std::unique_ptr<Game> optrGame);
    virtual ~GameScene() {}
    virtual void Init() override;
    virtual void Update(uint32_t dt) override;
    virtual void Draw(Screen& screen) override;

    virtual const std::string& GetSceneName() const override;

private:
    std::unique_ptr<Game> mGame;
};


#endif //SDL2TEST_GAMESCENE_H
