


// // in project implementation this draw function should only be in superclass
// void Bee::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }


// // fly() is overrided from the superclass
// void Bee::fly(){
//     // 
//     moverRect.x += 5;
// }

// Bee::Bee(){
//     // src coorinates from assets.png file, they have been found using spritecow.com
//     // srcRect = {7,88,160,103};
//     srand(time(NULL))
//     int value = rand() %3;
//     if value ==0:{srcRect = bee1}
//     else if value ==1 {srcRect = bee2}
//     else{srcRect = bee3}
  
//     // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
//     moverRect = {30, 40, 50, 60};
// }
#include "bee.hpp"
#include <vector>
#include <iostream>


const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;




    

void Bee::draw() {
    std :: cout << "Draw function of Bee called \n";


        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &(this->srcRect), &(this->moverRect));
    
       
    }



// fly() is overrided from the superclass
    void Bee::fly(){
  
    
        std::cout << "Fly function of Bee called \n";
        // Update the position of the pigeon
        if(isHovering)
        {
            count++;
            if(count > frames)
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

        

            // Check if the Bee went off the right side of the screen
        if (this->moverRect.x > SCREEN_WIDTH) {
            this->moverRect.x = 0; // Reappear from the left side
        }
        // else if (pigeon.moverRect.x  <=0) {
        //     pigeon.moverRect.x = SCREEN_WIDTH; // Reappear from the right side
        // }

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
    this->srcRect = {234, 630, 163, 162};
    this->moverRect = {x, y, 50, 60};
  
    // it will display bird on x , y location, the size of pigeon is 50 width, 60 height
    

}






