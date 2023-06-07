//
// Created by Ahmet.Yaylalioglu on 6.06.2023.
//

#ifndef SDL2TEST_UTILS_H
#define SDL2TEST_UTILS_H

static const float EPSILON = 0.0001f;

const float PI = 3.14159f;
const float TWO_PI = 2.0f * PI;

bool IsEqual(float x, float y);

bool IsGreaterThanOrEqual(float x, float y);

bool IsLessThanOrEqual(float x, float y);

float MillisecondsToSeconds(unsigned int milliseconds);


#endif //SDL2TEST_UTILS_H
