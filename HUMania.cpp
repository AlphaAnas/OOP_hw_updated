#include <iostream>
#include "HUMania.hpp"
#include "objectCreator.hpp"

void HUMania::drawObjects()
{
    for (Unit* unit : birds) {

       
        unit->draw();  // calls the draw function in unit class
        unit->fly();    // calls the virtual draw function in unit class which further goes to the specific bird class 

        bool value = unit->deleting(); // check if the bee went off from the horizontal value
     
        if (value)
        {
            
            std :: cout << "DELETING THE BEE" << std::endl;
            delete unit;        // delete the bee from pointer 
            birds.remove(unit); // remvoes the bee pointer object from the list
          
        }
    
  
 
    }

}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "createObject function of HU MANIA function called \n";
    ObjectCreator obj;    
    Unit* newbird = obj.getObject(x, y); // function returns any bird wherefore newbird pointer points towards it
    birds.push_back(newbird); // add the bird into the list so it can be iterated upon after.

    std::cout << "Object created at: " << x << " -- " << y << std:: endl; // a debug output
}

HUMania::~HUMania() {
    for (Unit* unit : birds) {
        delete unit; // delete the values on unit pointers
    }
    birds.clear();  // a builtin function of lists which deletes the values / pointers in the list.
}
