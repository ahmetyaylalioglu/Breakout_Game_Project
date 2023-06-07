//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#include "ArcadeScene.h"
#include "../Graphics/Screen.h"
#include "../Shapes/AARectangle.h"
#include "../Shapes/Triangle.h"
#include "../Shapes/Circle.h"
#include "../Graphics/Color.h"
#include "../Shapes/Line2D.h"
#include "../Input/GameController.h"
#include <iostream>

ArcadeScene::ArcadeScene()
{

}

void ArcadeScene::Init()
{
    ButtonAction action;
    action.key = GameController::ActionKey();
    action.action = [](uint32_t dt, InputState state)
    {
        if(GameController::IsPressed(state))
        {
            std::cout << "Action button was pressed!" << std::endl;
        }
    };

    mGameController.AddInputActionForKey(action);


    MouseButtonAction mouseAction;
    mouseAction.mouseButton = GameController::LeftMouseButton();
    mouseAction.mouseInputAction = [](InputState state, const MousePosition& position)
    {
        if(GameController::IsPressed(state))
        {
            std::cout << "Left Mouse button pressed!"<<std::endl;
        }
    };

    mGameController.AddMouseButtonAction(mouseAction);

    mGameController.SetMouseMovedAction([](const MousePosition& mousePosition){
        //std::cout << "Mouse position x: " << mousePosition.xPos << ", y: " << mousePosition.yPos << std::endl;
    });

}

void ArcadeScene::Update(uint32_t dt)
{
}

void ArcadeScene::Draw(Screen& theScreen)
{
    Line2D line = {Vec2D(0, 0), Vec2D(theScreen.Width(), theScreen.Height())};
    Triangle triangle = {Vec2D(60, 10), Vec2D(10, 110), Vec2D(110, 110)};
    AARectangle rect = {Vec2D(theScreen.Width()/2 - 25, theScreen.Height()/2 - 25), 50, 50};
    Circle circle = {Vec2D(theScreen.Width()/2 + 50, theScreen.Height()/2 + 50), 50};

    theScreen.Draw(triangle, Color::Red(), true, Color::Red());
    theScreen.Draw(rect, Color::Blue(), true, Color(0, 0, 255, 140));
    theScreen.Draw(circle, Color(0, 255, 0, 150), true, Color(0, 255, 0, 150));

}

const std::string& ArcadeScene::GetSceneName() const
{
    static std::string sceneName = "Arcade Scene";
    return sceneName;
}


std::unique_ptr<Scene> ArcadeScene::GetScene(eGame game)
{
    switch(game)
    {
        case TETRIS:
        {

        }
            break;

        case BREAK_OUT:
        {

        }
            break;

        case ASTEROIDS:
        {

        }
            break;

        case PACMAN:
        {

        }
            break;
        default:
        {

        }
            break;
    }

    return nullptr;
}
