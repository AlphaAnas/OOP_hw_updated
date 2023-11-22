
#pragma once

#include "objectCreator.hpp"
#include <iostream>

using namespace std;
    ObjectCreator :: ObjectCreator() // default constructor
    {
          std::cout << "ObjectCreator() constructor called of OBJECTCREATOR \n";
         srand( time(0));
}
    Unit*  ObjectCreator::getObject(int x, int y)
    {
         std::cout << "GETOBJECT() function called of OBJECTCREATOR \n";
                // Randomly choose an object type (pigeon, bee, butterfly)
             // this ensures that random value is always different
            int value = rand() % 3; // 0 for pigeon, 1 for bee, 2 for butterfly
         
            std::cout << "Value: " << value;
            //  value =3;
            if(value == 0) { 
                std:: cout << "Pigeon object returned \n";
                return new Pigeon(x , y );

            }
            else if(value ==1)
            {   return new Bee(x, y);
                }
            else{
                return new Butterfly(x,y);
            }
    }

          

