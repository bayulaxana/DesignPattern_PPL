#include "PizzaDecorator.hpp"

class ChickenTopping: public PizzaDecorator
{
    public:
        ChickenTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Beef";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+20;
        }
};