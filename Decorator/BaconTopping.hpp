#include "PizzaDecorator.hpp"

class BaconTopping: public PizzaDecorator
{
    public:
        BaconTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Beef";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+20;
        }
};