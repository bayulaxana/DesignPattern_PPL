#include <list>
#include <algorithm>
#include <vector>
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
            return object_Pizza->Serve() + " plus topping Bacon";
        }
        float getPrice()
        {
            return object_Pizza->getPrice() + 20;
        }
};

class MushroomsTopping : public PizzaDecorator
{
    public:
        MushroomsTopping(Pizza *basePizza): PizzaDecorator(basePizza){}

        string Serve()
        {
            return object_Pizza->Serve() + " plus topping Mushrooms";
        }
        float getPrice()
        {
            return object_Pizza->getPrice() + 10;
        }
};

int main(){
    string input;
    int pilih_menu;
    int i=0;
    vector<Pizza*> pizzaList;
    vector<PizzaDecorator*> toppingList;

    while(1){
        pizzaList.push_back(new PlainPizza());
        cout << pizzaList[i] ->Serve() <<endl;
        cout << pizzaList[i]-> getPrice() <<endl;

        cout <<"Pizza berhasil ditambahkan, Tambahkan topping"<<endl;
        cout << "Press + to Add Pizza\n";
        cout << "Press EXIT to Exit\n";

        cin >> input;
        if(input=="+")
        {
            while(1)
            {
                cout << "Pilih Topping"<<endl;
                cout << "1. Bacon\n2. Mushrooms\n3. exit\n";
                cin >> pilih_menu;

                if(pilih_menu==1)
                {
                    toppingList.push_back(new BaconTopping(pizzaList[i]));
                    cout << toppingList[i] ->Serve() <<endl;
                    cout << toppingList[i]-> getPrice() <<endl;
                }
                else if(pilih_menu==2)
                {
                    toppingList.push_back(new MushroomsTopping(pizzaList[i]));
                    cout << toppingList[i] ->Serve() <<endl;
                    cout << toppingList[i]-> getPrice() <<endl;
                }
                else if(pilih_menu==3)
                {
                    break;
                }
                delete toppingList[i];
            }
        }
        else if(input=="EXIT")
        {
            break;
        }
        
    }

}