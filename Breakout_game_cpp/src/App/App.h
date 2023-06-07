//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_APP_H
#define SDL2TEST_APP_H

#include "../Graphics/Screen.h"
#include <stdint.h>
#include <vector>
#include <memory>
#include "../Scenes/Scene.h"
#include "../Input/InputController.h"

struct SDL_Window;

class App
{
public:
    static App& Singleton();
    bool Init(uint32_t width, uint32_t height, uint32_t mag);
    void Run();

    inline uint32_t Width() const {return mScreen.Width();}
    inline uint32_t Height() const {return mScreen.Height();}

    void PushScene(std::unique_ptr<Scene> scene);
    void PopScene();
    Scene* TopScene(); //current scene

    static const std::string& GetBasePath();

private:
    Screen mScreen;
    SDL_Window * mnoptrWindow;

    std::vector<std::unique_ptr<Scene>> mSceneStack;
    InputController mInputController;
};



#endif //SDL2TEST_APP_H
