// #include<SDL.h>
// #include "drawing.hpp"
// class Bee{
// private:
//     bee1= {248, 433, 247, 178}
//     bee2= {257, 182, 192, 214}
//     bee3= {256, 24, 174, 134}
//     SDL_Rect srcRect, moverRect;
//     int frame = 0;

// public:
//     // add the fly function here as well.
//     void draw();
//     void fly();
//     Bee(); 
//     // may add other overloaded constructors here... 
// };
#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"
#include <vector>

class Bee : public Unit{
private:
   
   
public:
    bool isHovering;      // is the bee hovering now !
    int frames =10;     // a variable to check that 10 frames have passed
    int hoverProb  =5;
    int count = 0;  // a variable which starts from 0 and keeps adding itself for 10 frames.
    SDL_Rect srcRect, moverRect;
    
    
    // add the fly function here as well.

    int frameCounter = 0;
    void draw() override;
    void fly() override;
    Bee(int, int); 
   
     // may add other overloaded constructors here... 
    Bee(SDL_Rect srcRect1,SDL_Rect moverRect1);
   

   
};



