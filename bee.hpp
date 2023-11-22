#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"
#include <vector>

class Bee : public Unit{
private:
   
   
public:
    bool isHovering;      // is the bee hovering now !
    int frames =10;     // a variable to check that 10 frames have passed
    int hoverProb  =5;  // a check for 5% probablity 
    int count = 0;  // a variable which starts from 0 and keeps adding itself for 10 frames.

    
    
    // add the fly function here as well.

    int frameCounter = 0;
   
    void fly() override;
    bool deleting() override;
    Bee(int, int); 

   

 

   
};



