#include "PizzaDecorator.hpp"

class PepperoniTopping: public PizzaDecorator
{
    public:
        PepperoniTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Pepperoni";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+4;
        }
};