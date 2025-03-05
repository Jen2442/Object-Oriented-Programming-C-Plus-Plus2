#ifndef RPG_H
#define RPG_H
#include <iostream> 
#include <string>

using namespace std;

const int SKILL_SIZE=2;

Class RPG {

    PUBLIC:
    RPG();
    RPG(string name, int health, int strentgh, int defense, string type);

    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;
    bool isAlive() const;



    void setSkills();
    void printAction(string,RPG);
    void updateHealth(int);
    void Attack(RPG*);
    void useSkill(RPG*);




   private:
   string type;
   string Skills [SKILL_SIZE];
   string Name;
   int Health;
   int Strngth;
   int Defense;


   

};
   
#endif