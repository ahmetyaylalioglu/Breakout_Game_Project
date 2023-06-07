//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#include "Shape.h"

void Shape::MoveBy(const Vec2D& deltaOffset)
{
    for(Vec2D& point : mPoints)
    {
        point = point + deltaOffset;
    }
}
