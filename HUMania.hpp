#include<SDL.h>
// #include "pigeon.hpp"
// #include "bee.hpp"
// #include "butterfly.hpp"
#include<vector>
#include "Unit.hpp"
#include<list>


class HUMania{

    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
    // Pigeon p1;
    std::list<Unit*> birds; // It's a list that can store Unit type objects
    

    //Create your list here
    public:
 
	

    
    void drawObjects(); 
    void createObject(int, int);
    


    // create destructor which deletes all dynamic objects
    ~HUMania();

};