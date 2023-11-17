#include "unit.hpp"
#include <random>
#include <ctime>
#include <vector>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include <iostream>


    /*  Create a class Unit, which deals with drawing of an object. It has a
        draw method, completely implemented, and it draws one of the three
        states of object. It also has a fly method. Since fly behavior is different
        for different types of objects, therefore it’s not fully implemented rather
        it’s made virtual.              */

        // Unit()
        // {
        //         // will make clouds and sun here.
               
        
        // }
     
        void Unit::draw()
  
        {
                 SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &(this->srcRect), &(this->moverRect));
               
        }
        void Unit::fly() {
                std :: cout << "FLY() function of unit called \n";
        }

   
