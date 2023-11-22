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

       
        void Unit::draw() // this renders a pigeon on the src and mover rectangle initialized by the constructor in respective class
  
        {
                 SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &(this->srcRect), &(this->moverRect));
               
        }
        void Unit::fly() {
            // a virtual function that is overriden in child classes
                std :: cout << "FLY() function of unit called \n";

        }
        bool Unit:: deleting()
        {
             // a virtual function that is overriden in child class bee
            return false;
        }

   
