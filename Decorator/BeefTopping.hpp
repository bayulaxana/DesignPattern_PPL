#include "PizzaDecorator.hpp"

class BeefTopping: public PizzaDecorator
{
    public:
        BeefTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Beef";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+5;
        }
};