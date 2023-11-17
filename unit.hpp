#include <random>
#include <ctime>
#include <SDL.h>

#ifndef EXAMPLE_H
#define EXAMPLE_H


class Unit{
    public:
         SDL_Rect srcRect, moverRect;
        virtual void draw();
        virtual void fly()  ;
      


    





};

#endif // EXAMPLE_H