// 

//     // may add other overloaded constructors here... 


#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"
#include <vector>

class Butterfly : public Unit{
private:
    bool goUP;
   
public:
  
    
    
    // add the fly function here as well.

    int frameCounter = 0;
    void draw() ;
    void fly() override;
    Butterfly(int, int); 
   
     // may add other overloaded constructors here... 
    Butterfly(SDL_Rect srcRect1,SDL_Rect moverRect1);
   

   
};




