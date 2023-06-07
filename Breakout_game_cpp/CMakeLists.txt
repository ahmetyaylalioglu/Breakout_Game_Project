cmake_minimum_required(VERSION 3.7)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(Breakout_Game_CapStone_Udacity)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

#find_package(SDL2 REQUIRED)
set(SDL2_INCLUDE_DIR ../SDL-release-2.26.5/include)
set(SDL2_LIB_DIRS ../SDL-release-2.26.5/build ../SDL-release-2.26.5/build/.libs)
include_directories(${SDL2_INCLUDE_DIR} src)
#include_directories(${SDL2_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIRS})

add_executable(Breakout_Game_CapStone_Udacity src/main.cpp src/Utils/Vec2D.cpp src/Utils/Vec2D.h src/Utils/Utils.cpp src/Utils/Utils.h src/Graphics/Color.cpp src/Graphics/Color.h src/Graphics/ScreenBuffer.cpp src/Graphics/ScreenBuffer.h src/Graphics/Screen.cpp src/Graphics/Screen.h src/Shapes/Line2D.cpp src/Shapes/Line2D.h src/App/App.cpp src/App/App.h src/Games/Game.h src/Input/GameController.cpp src/Input/GameController.h src/Input/InputAction.h src/Input/InputController.cpp src/Input/InputController.h src/Scenes/Scene.h src/Scenes/GameScene.cpp src/Scenes/GameScene.h src/Scenes/ArcadeScene.cpp src/Scenes/ArcadeScene.h src/Utils/FileCommandLoader.cpp src/Utils/FileCommandLoader.h src/Shapes/Triangle.cpp src/Shapes/Triangle.h src/Shapes/Shape.cpp src/Shapes/Shape.h src/Shapes/Circle.cpp src/Shapes/Circle.h src/Shapes/AARectangle.cpp src/Shapes/AARectangle.h src/Games/BreakOut.cpp src/Games/BreakOut.h src/Games/Ball.cpp src/Games/Ball.h src/Games/BoundaryEdge.h src/Games/Block.cpp src/Games/Block.h src/Games/BreakoutGameLevel.cpp src/Games/BreakoutGameLevel.h src/Games/Paddle.cpp src/Games/Paddle.h src/Games/Excluder.cpp src/Games/Excluder.h src/Games/LevelBoundary.cpp src/Games/LevelBoundary.h)
#string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)
#target_link_libraries(SnakeGame ${SDL2_LIBRARIES})
target_link_libraries(Breakout_Game_CapStone_Udacity SDL2main SDL2)