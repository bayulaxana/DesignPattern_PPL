#include "AnimalFactory.hpp"
#include <list>
#include <algorithm>

#ifndef BASE
#define BASE
#include <string>
#include <iostream>
#endif

using namespace std;

Animal *AnimalFactory::chicken = nullptr;
Animal *AnimalFactory::sheep = nullptr;
Animal *AnimalFactory::cow = nullptr;

void printListof(list<Animal*> &, string);
void showBuyAnimal(list<Animal*> &);
void buyAnimal(list<Animal*> &, string);

int main()
{
    AnimalFactory::init();
    int money = 0, command;

    /* List of Animal */
    list<Animal*> animalList;

    while (true) {
        puts("WELCOME TO THE FARM");
        puts("Choose Command\n");
        puts("1. View All Animals");
        puts("2. View Chickens");
        puts("3. View Cows");
        puts("4. View Sheeps");
        puts("5. Buy Animal");

        printf("\n>> "); scanf("%d", &command);

        if (command == 1) {
            printListof(animalList, "ALL");
        }
        else if (command == 2) {
            printListof(animalList, "CHICKEN");
        }
        else if (command == 3) {
            printListof(animalList, "COW");
        }
        else if (command == 4) {
            printListof(animalList, "SHEEP");
        }
        else if (command == 5) {
            showBuyAnimal(animalList);
        }
    }

    return 0;
}

void buyAnimal(list<Animal*> &animals, string type) {
    Animal *object;

    if (type == "COW") object = AnimalFactory::createCow();
    else if (type == "CHICKEN") object = AnimalFactory::createChicken();
    else if (type == "SHEEP") object = AnimalFactory::createSheep();

    string name;
    int age;

    printf("Enter the name :"); cin >> name;
    printf("Enter the age : "); cin >> age;

    object->setName(name);
    object->setAge(age);
    animals.push_back(object);

    object = nullptr;
}

void showBuyAnimal(list<Animal*> &animals)
{
    int comm = 0;
    system("clear");
    
    while (!comm) {
        puts("What animal to buy?");
        printf("\n");
        puts("1. Cow");
        puts("2. Sheep");
        puts("3. Chicken");
        printf("\n> "); scanf("%d", &comm);

        if (comm == 1) buyAnimal(animals, "COW");
        else if (comm == 2) buyAnimal(animals, "SHEEP");
        else buyAnimal(animals, "CHICKEN");
    }
}

void printListof(list<Animal*> &animals, string type)
{
    system("clear");
    
    if (animals.empty()) {
        puts("You have no animals\n");
    }
    else {
        int i = 0;
        for (auto animal : animals) {
            if (type == "ALL")
                printf("%d. %s %s %d\n", ++i, animal->getType().c_str(), animal->getName().c_str(), animal->getAge());
            if (animal->getType() == type)
                printf("%d. %s %d\n", ++i, animal->getName().c_str(), animal->getAge());
        }
        if (i == 0) printf("You have no %s\n", type.c_str());
    }
}