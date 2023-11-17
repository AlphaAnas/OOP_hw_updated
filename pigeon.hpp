#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"
#include <vector>

class Pigeon : public Unit{
private:
   
   
public:
    SDL_Rect srcRect, moverRect;
    
    
    // add the fly function here as well.
   

    // Pigeon pigeon1 = {{7,88,155,103} ,{30, 40, 50, 60} }; // what's the difference in curly and round brackets
    // Pigeon pigeon2 = { {0,137,153,84} ,{30, 40, 50, 60} };
    // Pigeon pigeon3= { {2,361,159,124}, {30, 40, 50, 60} };


    int frameCounter = 0;
    void draw() override;
    void fly() override;
    // void makeObjects() override;
    Pigeon(int, int); 
   
     // may add other overloaded constructors here... 
    Pigeon(SDL_Rect srcRect1,SDL_Rect moverRect1);
   

   
};
