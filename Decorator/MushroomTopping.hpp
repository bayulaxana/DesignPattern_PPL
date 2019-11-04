#include "PizzaDecorator.hpp"

class MushroomTopping : public PizzaDecorator
{
    public:
        MushroomTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Mushroom";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+10;
        }
};