#pragma once
#define BASE
#include <string>
#include <iostream>
using namespace std;

// Abstract Class for Animal
class Animal
{
protected:
    string name;
    string type;
    string gender;
    int age;

public:
    /* Constructor */
    Animal();
    Animal(string type);
    
    /* Virtual function for cloning */
    virtual Animal* clone() = 0;

    /* Getter and Setter */
    string getType();
    string getName();
    string getGender();
    int getAge();

    void setName(string name);
    void setAge(int age);
    void setGender(string gender);
};

Animal::Animal()
{}

Animal::Animal(string type)
: type(type)
{}

string Animal::getType() {return this->type;}
string Animal::getName() {return this->name;}
string Animal::getGender() {return this->gender;}
int Animal::getAge() {return this->age;}

void Animal::setName(string name) {this->name = name;}
void Animal::setAge(int age) {this->age = age;}
void Animal::setGender(string gender) {this->gender = gender;}