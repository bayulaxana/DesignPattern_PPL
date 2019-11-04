#include "PizzaDecorator.hpp"
#include <list>
#include <algorithm>

#ifndef BASE
#define BASE
#include <string>
#include <iostream>
#endif

using namespace std;

int main(){
    string input;
    int pilih_menu;

    Pizza *plainPizza = new PlainPizza();
    cout << plainPizza ->Serve() <<endl;
    cout << plainPizza-> getPrice() <<endl;

    cout <<"Pizza berhasil ditambahkan, Tambahkan topping"<<endl;
    cout << "Pilih Topping"<<endl;
    cout << "1. Beef\n2.Mushroom\n";
    cin >> pilih_menu;

    if(pilih_menu==1)
    {
        Pizza *toppingPizza = new BeefTopping(plainPizza);
        cout << toppingPizza ->Serve() <<endl;
        cout << toppingPizza-> getPrice() <<endl;
    }
    else if(pilih_menu==2)
    {
        Pizza *toppingPizza = new MushroomTopping(plainPizza);
        cout << toppingPizza ->Serve() <<endl;
        cout << toppingPizza-> getPrice() <<endl;
    }

}