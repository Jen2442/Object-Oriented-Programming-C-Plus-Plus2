#indef RPG_h
#define RPG_h
#include <iostream> 
#include <string>

using namespace std;

const int SKILL_SIZE=2;

Class RPG{

    PUBLIC:RPG();
    //CONSTRUCTORS
   
    RPG(string name, int health, int strentgh, int defense, string type);

    string getname() const;
    int gethealth() const;
    int getstrength() const;
    int getdefense() const;
    bool isalive() const;



    void setskills();
    void print action(string,RPG);
    void updatehealth(int);
    void attack(RPG*);
    void useskill(RPG*);




   private:
   string type;
   string skills [SKILL_SIZE];
   string name;
   int health;
   int strngth;
   int defense;


   

}
   
#endif