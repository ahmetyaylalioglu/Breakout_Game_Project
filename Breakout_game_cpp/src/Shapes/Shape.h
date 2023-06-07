//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_SHAPE_H
#define SDL2TEST_SHAPE_H


#include "../Utils/Vec2D.h"
#include <vector>

class Shape
{
public:
    virtual Vec2D GetCenterPoint() const = 0;
    virtual ~Shape() {}
    inline virtual std::vector<Vec2D> GetPoints() const {return mPoints;}
    void MoveBy(const Vec2D& deltaOffset);
protected:
    std::vector<Vec2D> mPoints;
};


#endif //SDL2TEST_SHAPE_H
