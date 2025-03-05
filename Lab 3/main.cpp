#include "RPG.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

    RPG overloaded=RPG("John",95,5,5,"warrior");

    RPG unknown=RPG();


//(string name, int health, int strentgh, int defense, string type)
    printf("name: %s \thealth: %i \tstrength: %i \tdefense: %i \ttype: %s",
        unknown.getName().c_str(),unknown.getHealth(),unknown.getStrength(),unknown.getDefense(), unknown.getType());

     printf("name: %s \thealth: %i \tstrength: %i \tdefense: %i \ttype: %s",
            overloaded.getName().c_str(),overloaded.getHealth(),overloaded.getStrength(),overloaded.getDefense(),unknown.getType());






    return 0;
}
