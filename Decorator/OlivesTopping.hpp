#include "PizzaDecorator.hpp"

class OlivesTopping: public PizzaDecorator
{
    public:
        OlivesTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Olives";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+4;
        }
};