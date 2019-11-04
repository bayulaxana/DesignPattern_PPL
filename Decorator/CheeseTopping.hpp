#include "PizzaDecorator.hpp"

class CheeseTopping: public PizzaDecorator
{
    public:
        CheeseTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Cheese";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+20;
        }
};