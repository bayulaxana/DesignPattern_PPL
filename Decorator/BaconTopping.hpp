#include "PizzaDecorator.hpp"

class BaconTopping: public PizzaDecorator
{
    public:
        BaconTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Bacon";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+5;
        }
};