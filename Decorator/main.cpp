#include <string>
#include <iostream>
#include "Pizza.hpp"
#include "PlainPizza.hpp"
#include "MushroomsTopping.hpp"
#include "BaconTopping.hpp"
#include "CheeseTopping.hpp"
#include "HamTopping.hpp"
#include "OlivesTopping.hpp"
#include "OnionsTopping.hpp"
#include "PepperoniTopping.hpp"
#include "PeppersTopping.hpp"
#include "PineappleTopping.hpp"
#include "TomatosTopping.hpp"
#include "TunaTopping.hpp"
using namespace std;

int main() {
    Pizza *myPizza = new CheeseTopping(new BaconTopping(new PlainPizza()));

    cout << myPizza->Serve() << endl;
    cout << myPizza->getPrice() << endl;
}