#ifndef RPG_H
#define RPG_H
#include <iostream> 
#include <string>

using namespace std;

const int SKILL_SIZE=2;

class RPG {

    public:
    /////////////////
    RPG();
    RPG(string name, int health, int strentgh, int defense, string type);
/////////////////////
    string getName() const;

    int getHealth() const;

    int getStrength() const;

    int getDefense() const;

    bool isAlive() const;
    
//////////////////////////
    void setSkills();

    void printAction(string,RPG);

    void updateHealth(int);

    void attack(RPG *target);

    void useSkill(RPG* target);

////////////////////////
   private:

   string type;
   
   string skills [SKILL_SIZE];

   string name;

   int health;

   int strength;

   int defense;


};
   
#endif
