//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_CIRCLE_H
#define SDL2TEST_CIRCLE_H


#include "Shape.h"

class Circle: public Shape
{
public:

    Circle();
    Circle(const Vec2D& center, float radius);

    inline virtual Vec2D GetCenterPoint() const override {return mPoints[0];}
    inline float GetRadius() const {return mRadius;}
    inline void SetRadius(float radius) {mRadius = radius;}
    inline void MoveTo(const Vec2D& position) {mPoints[0] = position;}

    bool Intersects(const Circle& otherCircle) const;
    bool ContainsPoint(const Vec2D& point) const;

private:
    float mRadius;
};

#endif //SDL2TEST_CIRCLE_H
