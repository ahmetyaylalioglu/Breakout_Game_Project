//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_LEVELBOUNDARY_H
#define SDL2TEST_LEVELBOUNDARY_H


#include "Excluder.h"

class AARectangle;
class Ball;

class LevelBoundary
{
public:

    LevelBoundary(){}
    LevelBoundary(const AARectangle& rect);
    bool HasCollided(const Ball& ball, BoundaryEdge& edge);
    inline const AARectangle& GetAARectangle() const {return mIncluder.GetAARectangle();}

private:
    bool HasCollidedWithEdge(const Ball& ball, const BoundaryEdge& edge) const;//check to see if we collided at all
    Excluder mIncluder;
};


#endif //SDL2TEST_LEVELBOUNDARY_H
