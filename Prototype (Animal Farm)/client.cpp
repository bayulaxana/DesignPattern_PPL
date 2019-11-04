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
void buyAnimal();

int main()
{
    AnimalFactory::init();
    int money = 0, command;

    /* List of Animal */
    list<Animal*> animalList;

    while (true) {
        puts("WELCOME TO THE FARM");
        puts("Choose Command");

        puts("1. View All Animals");
        puts("2. View Chickens");
        puts("3. View Cows");
        puts("4. View Sheeps");
        puts("5. Buy Animals");

        printf(">> "); scanf("%d", &command);

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

        }
    }

    return 0;
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
                printf("%d. %s %d\n", ++i, animal->getName().c_str(), animal->getAge());
            if (animal->getType() == type)
                printf("%d. %s %d\n", ++i, animal->getName().c_str(), animal->getAge());
        }
        if (i == 0) printf("You have no %s\n", type.c_str());
    }
}