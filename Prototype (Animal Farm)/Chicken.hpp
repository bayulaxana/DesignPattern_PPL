#pragma once
#include "Animal.hpp"

class Chicken : public Animal
{
private:

public:
    Chicken();
    Chicken(string type);
    Animal* clone();

    void clucks() {
        cout << "I am clucking\n";
    }
};

Chicken::Chicken() {}

Chicken::Chicken(string type)
: Animal(type) {}

Animal* Chicken::clone() {
    return new Chicken(*this);
}