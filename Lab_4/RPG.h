
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

    void printAction(string type,RPG*user);

    void updateHealth(int);

    void attack(RPG *user);

    void useSkill(RPG* user);

////////////////////////
   private:

   string type;
   
   string skills [SKILL_SIZE];

   string name;

   int health;

   int strength;

   int defense;


};
   

