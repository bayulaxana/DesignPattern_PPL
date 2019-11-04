#include "Chicken.hpp"
#include "Sheep.hpp"
#include "Cow.hpp"

class AnimalFactory
{
    static Animal *chicken;
    static Animal *sheep;
    static Animal *cow;

public:
    static void init();
    static Animal* createChicken();
    static Animal* createSheep();
    static Animal* createCow();
};

void AnimalFactory::init()
{
    chicken = new Chicken("CHICKEN");
    sheep = new Sheep("SHEEP");
    cow = new Cow("COW");
}

Animal* AnimalFactory::createChicken() {
    return chicken->clone();
}

Animal* AnimalFactory::createCow() {
    return cow->clone();
}

Animal* AnimalFactory::createSheep() {
    return sheep->clone();
}

Animal *AnimalFactory::chicken = nullptr;
Animal *AnimalFactory::sheep = nullptr;
Animal *AnimalFactory::cow = nullptr;