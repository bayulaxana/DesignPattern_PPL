#include "PizzaDecorator.hpp"

class PeppersTopping: public PizzaDecorator
{
    public:
        PeppersTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Beef";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+20;
        }
};