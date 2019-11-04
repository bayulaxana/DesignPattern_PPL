#include "PizzaDecorator.hpp"

class TomatosTopping: public PizzaDecorator
{
    public:
        TomatosTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Tomatos";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+1;
        }
};