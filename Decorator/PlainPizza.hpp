#pragma once
#include "Pizza.hpp"

class PlainPizza : public Pizza 
{
    public:
        string Serve() {
            return "Pizza";
        }
        float getPrice()
        {
            return 50;
        }
};