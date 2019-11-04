#include "PizzaDecorator.hpp"

class HamTopping: public PizzaDecorator
{
    public:
        HamTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Beef";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+20;
        }
};