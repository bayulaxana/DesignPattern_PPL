#include "PizzaDecorator.hpp"

class OnionsTopping: public PizzaDecorator
{
    public:
        OnionsTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Onions";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+3;
        }
};