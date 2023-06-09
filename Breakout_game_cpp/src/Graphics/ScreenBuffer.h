//
// Created by Ahmet.Yaylalioglu on 7.06.2023.
//

#ifndef SDL2TEST_SCREENBUFFER_H
#define SDL2TEST_SCREENBUFFER_H

#include <stdint.h>
#include "Color.h"
struct SDL_Surface;

class ScreenBuffer{
public:
    ScreenBuffer();
    ScreenBuffer(const ScreenBuffer& screenBuffer);
    ~ScreenBuffer();

    ScreenBuffer& operator=(const ScreenBuffer& screenBuffer);
    void Init(uint32_t format, uint32_t width, uint32_t height);

    inline SDL_Surface* GetSurface() {return mSurface;}
    void Clear(const Color& c = Color::Black());
    void SetPixel(const Color& color,int x,int y);

private:
    SDL_Surface* mSurface;
    uint32_t GetIndex(int r,int c);
};


#endif //SDL2TEST_SCREENBUFFER_H
