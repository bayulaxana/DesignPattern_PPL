#pragma once
#include "Animal.hpp"

class Sheep : public Animal
{
private:

public:
    Sheep();
    Sheep(string type);
    Animal* clone();
};

Sheep::Sheep()
{}

Sheep::Sheep(string type)
: Animal(type)
{}

Animal* Sheep::clone() {
    return new Sheep(*this);
}