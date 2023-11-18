#include <iostream>
#include "HUMania.hpp"
#include "objectCreator.hpp"

void HUMania::drawObjects()
{
    for (Unit* unit : birds) {
        char t;
        // Pigeon* pig = dynamic_cast<Pigeon*>(unit);
        // Bee* be= dynamic_cast<Bee*>(unit);
        // Butterfly* butter=dynamic_cast<Butterfly*>(unit);
        // if(pig){
        //     t='p';
        // }
        // else if(be){
        //     t='b';
        // }
        // else{
        //     t='u';
        // }
    
  
        unit->draw();
        unit->fly();
    }
    // call draw functions of all the objects here
    // p1.draw();
}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "createObject function of HU MANIA function called \n";
    ObjectCreator obj;
    Unit* newbird = obj.getObject(x, y);
    birds.push_back(newbird);

    std::cout << "Object created at: " << x << " -- " << y << std:: endl; // a debug output
}

HUMania::~HUMania() {
    for (Unit* unit : birds) {
        delete unit;
    }
    birds.clear();
}
