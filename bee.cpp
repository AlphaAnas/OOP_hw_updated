
#include "bee.hpp"
#include <vector>
#include <iostream>


const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;








// fly() is overrided from the superclass
    void Bee::fly()
    {
  
    
        std::cout << "Fly function of Bee called \n";
        // Update the position of the pigeon
        if(isHovering) // if the required condition to hover the bee is satisfied
        {
            count++;
            if(count > frames)  // bee hovers for  10 frames for a random 5% probablity
            {
                count =0;
                isHovering = false;
            }
        }
        else{
            this->moverRect.x += 5;
            srand(time(NULL));
            if (rand() % 100 < hoverProb) { // this condition check if the probablity is less than 5 or not
                isHovering = true;
            }
        }

        

     
        // Check if the Bee went off the top of the screen
        if (this->moverRect.y > SCREEN_HEIGHT) {
            this->moverRect.y = 0; // Reappear from the bottom
        }
        else if(this->moverRect.y <= 0)   // check if Bee went off through the bottom
        {
             this->moverRect.y = SCREEN_HEIGHT;  // Reappear from the top
        }
        // animation logic
        frameCounter = (frameCounter + 1)%3 ;  //0 for wings up ;; 1 for wings middle 3 for wings down

        if (frameCounter == 0) {
          
                this->srcRect = {63, 619, 151, 166};       //wings up ;
            
           
        } else if (frameCounter == 1) {
               
                this->srcRect =  {234, 630, 163, 162} ;   //wings middle
        } else {
             
                this->srcRect  = {409, 650, 171, 147};  //wings down
        }
       
}

Bee::Bee(int x, int y)
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    std::cout<<"Default constructor of Bee class called \n";
    Unit::srcRect = {234, 630, 163, 162};
    Unit::moverRect = {x, y, 50, 60};
  
    // it will display bird on x , y location, the size of pigeon is 50 width, 60 height
    

}
    bool  Bee::deleting()
            {
                std::cout << "Deleting function of bee called "<<std::endl;
                if(this->moverRect.x > SCREEN_WIDTH)
                {
                    return true; // check if the bee went off from the screen width
                }
                else{
                    return false;
                }
            }






