#include "pigeon.hpp"
#include <vector>
#include <iostream>
#include "unit.hpp"

// pigeon implementation will go here.
 std :: vector<Pigeon> pigeons;   // vector which stores pigeons

// Pigeon pigeon1 = {{7,88,155,103} ,{30, 40, 50, 60} }; // what's the difference in curly and round brackets


const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;

    



// fly() is overrided from the superclass
    void Pigeon::fly(){
    // 
        std::cout << "Fly function of Pigeon called \n";
        // Update the position of the pigeon
        this->moverRect.x += 4;
        

            // Check if the pigeon went off the right side of the screen
        if (this->moverRect.x > SCREEN_WIDTH) {
            this->moverRect.x = 0; // Reappear from the left side
        }
      

        // Check if the pigeon went off the top of the screen
        if (this->moverRect.y > SCREEN_HEIGHT) {
            this->moverRect.y = 0; // Reappear from the bottom
        }
        else if(this->moverRect.y <= 0)   // check if pigeon went off through the bottom
        {
             this->moverRect.y = SCREEN_HEIGHT;  // Reappear from the top
        }

        // the animation logic
        frameCounter = (frameCounter + 1)%3 ;  //0 for wings up ;; 1 for wings middle 3 for wings down

        if (frameCounter == 0) {
          
                this->srcRect = {0,137,153,84};       //wings up ;
            
           
        } else if (frameCounter == 1) {
               
                this->srcRect = {7,88,155,103} ;   //wings middle
        } else {
              
                this->srcRect  = {2,361,159,124};  //wings down
        }
      
}

Pigeon::Pigeon(int x, int y)
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    std::cout<<"Default constructor of Pigeon class called \n";
    Unit::srcRect = {7, 88, 160, 103};
    Unit::moverRect = {x, y, 50, 60};
  
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    

}
