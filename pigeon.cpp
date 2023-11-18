#include "pigeon.hpp"
#include <vector>
#include <iostream>
#include "unit.hpp"

// pigeon implementation will go here.
 std :: vector<Pigeon> pigeons;   // vector which stores pigeons
// in project implementation this draw function should only be in superclass
// Pigeon pigeon1 = {{7,88,155,103} ,{30, 40, 50, 60} }; // what's the difference in curly and round brackets
// Pigeon pigeon2 = { {0,137,153,84} ,{30, 40, 50, 60} };
// Pigeon pigeon3= { {2,361,159,124}, {30, 40, 50, 60} };

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 600;

    

    
        // frameCounter = (frameCounter + 1)%3 ;  //0 for wings up ;; 1 for wings middle 3 for wings down

        // if (frameCounter == 0) {
        //     // pigeon.srcRect = {0,137,153,84};       //wings up ;
        //         this->srcRect = {0,137,153,84};       //wings up ;
            
           
        // } else if (frameCounter == 1) {
        //         // pigeon.srcRect = {7,88,155,103} ;   //wings middle
        //         this->srcRect = {7,88,155,103} ;   //wings middle
        // } else {
        //         // pigeon.srcRect  = {2,361,159,124};  //wings down
        //         this->srcRect  = {2,361,159,124};  //wings down
        // }
       
    



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
        // else if (pigeon.moverRect.x  <=0) {
        //     pigeon.moverRect.x = SCREEN_WIDTH; // Reappear from the right side
        // }

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
            // pigeon.srcRect = {0,137,153,84};       //wings up ;
                this->srcRect = {0,137,153,84};       //wings up ;
            
           
        } else if (frameCounter == 1) {
                // pigeon.srcRect = {7,88,155,103} ;   //wings middle
                this->srcRect = {7,88,155,103} ;   //wings middle
        } else {
                // pigeon.srcRect  = {2,361,159,124};  //wings down
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

// Pigeon::Pigeon(SDL_Rect srcRect1,SDL_Rect moverRect1)
// {   
//     std::cout<<"Paramterized constructor of Pigeon class called \n"; // this initializes pigeon1 pigeon2 and pigeon3 for animations using src_rectangle
//     srcRect = srcRect1;
//     moverRect = moverRect1;
// }

// void makeObjects(int x, int y) 
// {
    //        srand(time(NULL)); // this ensures random number generated is different every time
    //        int value = rand() % 3;   // 0, 1, or 2

    //                 if (value == 0) { // insert a pigeon with wings up in the vector pigeons
    //                 // update the position of current pigeon as per mouse click
    //                         pigeon1.moverRect.x = x;
    //                         pigeon1.moverRect.y = y;
    //                         pigeons.push_back(pigeon1);
    //                 }

    //                 else if (value == 1) {// insert a pigeon with wings middle in the vector pigeons
                        
    //                         pigeon2.moverRect.x = x;// update x and y positions of current pigeon
    //                         pigeon2.moverRect.y = y;
    //                         pigeons.push_back(pigeon2);
    //                 }
    //                 else if(value ==2){// insert a pigeon with wings down in the vector pigeons
    //                     pigeon3.moverRect.x = x;// update x and y positions of current pigeon
    //                     pigeon3.moverRect.y = y;
    //                     pigeons.push_back(pigeon3);
    //                         ;
    //                 }
    //                 else{
    //                       std::cout << "The random value is not between 0 and 3 \n";

    //                 }
                
    // }
     



