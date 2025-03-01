#indef RPG_h
#define RPG_h
#include <iostream> 
#include <string>

using namespace std;

const int SKILL_SIZE=2;

Class RPG{

    PUBLIC:
    //CONSTRUCTORS
    RPG();
    RPG(string name, int health, int strentgh, int defense, string type);

    string getname() const;
    int gethealth() const;
    int getstrength() const;
    int getdefense() const;
    string gettype() const;



}
   
