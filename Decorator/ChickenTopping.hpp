#include "PizzaDecorator.hpp"

class ChickenTopping: public PizzaDecorator
{
    public:
        ChickenTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Chicken";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+5;
        }
};