#include "PizzaDecorator.hpp"

class TunaTopping: public PizzaDecorator
{
    public:
        TunaTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Tuna";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+4;
        }
};