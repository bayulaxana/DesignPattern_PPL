#include "Pizza.hpp"

class PlainPizza: public Pizza{
    public:
        string Serve(){
            return "Pizza";
        }
        float price()
        {
            return 50;
        }
        

};