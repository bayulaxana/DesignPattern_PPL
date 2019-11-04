#include "PizzaDecorator.hpp"

class PineappleTopping: public PizzaDecorator
{
    public:
        PineappleTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Pineapple";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+2;
        }
};