#pragma once
#define BASE
#include <string>
#include <iostream>
using namespace std;

#include "PlainPizza.hpp"
#include "PizzaDecorator.hpp"
#include "MushroomsTopping.hpp"
#include "BaconTopping.hpp"
#include "CheeseTopping.hpp"
#include "HamTopping.hpp"
#include "OlivesTopping.hpp"
#include "OnionsTopping.hpp"
#include "PepperoniTopping.hpp"
#include "PeppersTopping.hpp"
#include "PineappleTopping.hpp"
#include "TomatosTopping.hpp"
#include "TunaTopping.hpp"

class Pizza{
    protected: 
        float price = 0;
        void setPrice(float price);

    public:
        virtual string Serve() = 0;
        virtual float getPrice() =0 ;
};
