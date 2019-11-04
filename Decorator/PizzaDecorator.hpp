#include "Pizza.hpp"

class PizzaDecorator: public Pizza{
    protected:
        Pizza *object_Pizza;

    public:
        PizzaDecorator(Pizza *basePizza): object_Pizza(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve();
        }

        float getPrice()
        {
            return object_Pizza->getPrice();
        }

};