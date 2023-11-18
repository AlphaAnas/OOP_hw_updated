#pragma once
#include "unit.hpp"
#include "pigeon.hpp"
#include "butterfly.hpp"
#include "bee.hpp"
#include <iostream>


class ObjectCreator
{
    public:
        ObjectCreator(); // Constructor
        Unit* getObject(int, int);
    
};