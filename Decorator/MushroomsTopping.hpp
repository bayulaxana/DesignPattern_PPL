#include "PizzaDecorator.hpp"

class MushroomsTopping : public PizzaDecorator
{
    public:
        MushroomsTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Mushroom";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+10;
        }
};