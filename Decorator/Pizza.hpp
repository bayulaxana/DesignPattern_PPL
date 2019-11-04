#pragma once
#define BASE
#include <string>
#include <iostream>
using namespace std;

#include "PlainPizza.hpp"
#include "BeefTopping.hpp"
#include "MushroomTopping.hpp"

class Pizza{
    protected: 
        float price = 0;
        void setPrice(float price);

    public:
        virtual string Serve()=0;
        virtual ~Pizza(){}
        virtual float getPrice();
};
