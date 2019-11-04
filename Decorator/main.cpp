#include <list>
#include <algorithm>

#ifndef BASE
#define BASE
#include <string>
#include <iostream>
#endif

using namespace std;

class Pizza{
    protected: 
        float price = 0;
        void setPrice(float price);

    public:
        virtual string Serve() = 0;
        virtual float getPrice() =0 ;
};

class PlainPizza : public Pizza 
{
    public:
        string Serve() {
            return "Pizza";
        }
        float getPrice()
        {
            return 50;
        }
};

class PizzaDecorator: public Pizza {
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

class BaconTopping: public PizzaDecorator
{
    public:
        BaconTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Beef";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+20;
        }
};

class MushroomsTopping : public PizzaDecorator
{
    public:
        MushroomsTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " topping Mushrooms";
        }
        float getPrice()
        {
            return object_Pizza->getPrice()+10;
        }
};

int main(){
    string input;
    int pilih_menu;

    Pizza *plainPizza = new PlainPizza();
    cout << plainPizza ->Serve() <<endl;
    cout << plainPizza-> getPrice() <<endl;

    cout <<"Pizza berhasil ditambahkan, Tambahkan topping"<<endl;
    cout << "Pilih Topping"<<endl;
    cout << "1. Bacon\n2. Mushrooms\n";
    cin >> pilih_menu;

    if(pilih_menu==1)
    {
        Pizza *toppingPizza = new BaconTopping(plainPizza);
        cout << toppingPizza ->Serve() <<endl;
        cout << toppingPizza-> getPrice() <<endl;
    }
    else if(pilih_menu==2)
    {
        Pizza *toppingPizza = new MushroomsTopping(plainPizza);
        cout << toppingPizza ->Serve() <<endl;
        cout << toppingPizza-> getPrice() <<endl;
    }

}