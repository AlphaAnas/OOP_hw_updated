#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"
#include <vector>

class Pigeon : public Unit{
private:
   
   
public:
   

    // Pigeon pigeon1 = {{7,88,155,103} ,{30, 40, 50, 60} }; // what's the difference in curly and round brackets



    int frameCounter = 0;
    // void draw() ;
    void fly() override;
    // void makeObjects() override;
    Pigeon(int, int); 
   

   

   
};
