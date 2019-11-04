#pragma once
#include "Animal.hpp"

class Cow : public Animal
{
private:

public:
    Cow();
    Cow(string type);
    Animal* clone();
};

Cow::Cow()
{}

Cow::Cow(string type)
: Animal(type)
{}

Animal* Cow::clone() {
    return new Cow(*this);
}