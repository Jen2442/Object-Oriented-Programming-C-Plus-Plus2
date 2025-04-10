#include <iostream>
#include "Charmander.h"
#include "Pokemon.h"
using namespace std;

int main()
{

    //charmander first=charmadner();
    vector<string> pokemonType;
    pokemonType.push_back("fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout<<"-----------Constructor Created-----------\n";
    Charmander charlie=Charmander("Charlie",100,4,4,pokemonType,skills);
    //Charmander
    cout<< "\n------------Direct Speak------------\n";
    charlie.speak();
    //pokemon pointer to Charmander 
    Pokemon*p1=&charlie ;
    cout<<"\n-----------Speak called from pokemon Pointer---------\n";
    (*p1).speak();
    //cahrmander pointer to Charmander 
    Charmander*c1=&charlie;
    cout<<"\n-----------Speak called from Charmadner Pointer---------\n";
    (*c1).speak();
    //Charmander
    cout<<"\n----------Print Stats-----------\n";
    charlie.printStats();

}
