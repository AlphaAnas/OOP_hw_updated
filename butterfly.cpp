
#include "butterfly.hpp"
#include <vector>
#include "unit.hpp"
#include <iostream>




const int SCREEN_WIDTH = 1000; // default value of window size
const int SCREEN_HEIGHT = 600;

    

// fly() is overrided from the superclass
    void Butterfly::fly(){
  
    
       // std::cout << "Fly function of Butterfly called \n";
        // Update the position of the butterfly
        this->moverRect.x += 5;
        if (!goUP)  // if check of butterfly is not true to go up
        {
            this->moverRect.y +=5;  // butterfly moves down
                
            // Check if the butterfly went to the bottom of the screen
            if (this->moverRect.y >  SCREEN_HEIGHT - moverRect.h) {
                goUP= true;
                this->moverRect.y -=5;
                
            }
        }
        else{
            this->moverRect.y -= 5; // the butterfly starts to move up
             if(this->moverRect.y <= 0)   // check if butterfly reached the top 
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
         
                this->srcRect = {248, 433, 247, 178};       //wings up ;
            
           
        } else if (frameCounter == 1) {
          
                this->srcRect =  {257, 182, 192, 214} ;   //wings middle
        } else {
      
                this->srcRect  = {256, 24, 174, 134} ; //wings down
        }
       
      
}

Butterfly::Butterfly(int x, int y)
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    std::cout<<"Default constructor of Butterfly class called \n";
    Unit::srcRect =  {257, 182, 192, 214};
    Unit::moverRect = {x, y, 50, 60};
  
    // it will display bird on x = 30, y = 40 location, the size of bird is 50 width, 60 height
    

}








