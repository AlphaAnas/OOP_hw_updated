
// }
#include "butterfly.hpp"
#include <vector>
#include "unit.hpp"
#include <iostream>


// in project implementation this draw function should only be in superclass

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;

    


// fly() is overrided from the superclass
    void Butterfly::fly(){
  
    
        std::cout << "Fly function of Butterfly called \n";
        // Update the position of the pigeon
        this->moverRect.x += 5;
        if (!goUP)
        {
            this->moverRect.y +=5;
                
            // Check if the Bee went off the top of the screen
            if (this->moverRect.y >  SCREEN_HEIGHT - moverRect.h) {
                goUP= true;
                this->moverRect.y -=5;
                
            }
        }
        else{
            this->moverRect.y -= 5;
             if(this->moverRect.y <= 0)   // check if Bee went off through the bottom
                {
                    goUP= false;
                    this->moverRect.y +=5;
                }

            }

        

            // Check if the Bee went off the right side of the screen
        if (this->moverRect.x > SCREEN_WIDTH) {
            this->moverRect.x = 0; // Reappear from the left side
        }

       
         // animation logic
         frameCounter = (frameCounter + 1)%3 ;  //0 for wings up ;; 1 for wings middle 3 for wings down

        if (frameCounter == 0) {
            // pigeon.srcRect = {0,137,153,84};       //wings up ;
                this->srcRect = {248, 433, 247, 178};       //wings up ;
            
           
        } else if (frameCounter == 1) {
                // pigeon.srcRect = {7,88,155,103} ;   //wings middle
                this->srcRect =  {257, 182, 192, 214} ;   //wings middle
        } else {
                // pigeon.srcRect  = {2,361,159,124};  //wings down
                this->srcRect  = {256, 24, 174, 134} ; //wings down
        }
       
      
}

Butterfly::Butterfly(int x, int y)
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    std::cout<<"Default constructor of Butterfly class called \n";
    Unit::srcRect =  {257, 182, 192, 214};
    Unit::moverRect = {x, y, 50, 60};
  
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    

}

Butterfly::Butterfly(SDL_Rect srcRect1,SDL_Rect moverRect1)
{   
    std::cout<<"Paramterized constructor of Pigeon class called \n"; // this initializes pigeon1 pigeon2 and pigeon3 for animations using src_rectangle
    srcRect = srcRect1;
    moverRect = moverRect1;
}






