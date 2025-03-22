#include "RPG.h"
#include <iostream>
#include <string>

using namespace std;

RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
   setSkills();

}

///////////////////////////////////////////////////

RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills();
}

////////////////////////////////////////////////////

string RPG::getName() const{
    return name;
}


int RPG::getHealth() const{
    return health;
}


int RPG::getStrength() const{
    return strength;
}


int RPG::getDefense() const{
    return defense;
}


bool RPG::isAlive() const{
    return health > 0;
}

////////////////////////////////////////////////////////////

void RPG::setSkills(){
    if(type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    }
    else if(type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    }
    else if(type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    }
    else{
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

//////////////////////////////////////////////////////////////////

void RPG::updateHealth(int new_health){
    health = new_health;
}

/////////////////////////////////////////////////////////

void RPG::printAction(string skill, RPG *opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), (*opponent).getName().c_str());
}

//////////////////////////////////////////////////////////

void RPG::attack(RPG * opponent) {
    int damage = strength - (*opponent).getDefense();
    if (damage < 1) {
        damage = 1;
    }
    
    int newhealth=(*opponent).getHealth()-damage;

    if (newhealth<0){
     newhealth=0;
    }
    (*opponent).updateHealth(newhealth);
    printAction("attack",opponent);

}

/////////////////////////////////////////////////////////////

void RPG::useSkill(RPG * opponent){

    for (int i=0;i<SKILL_SIZE;i++){
        printf("Skill %i: %s\n",i,skills[i].c_str());

    }

    int skillchoiceindex;
cout<< "choose a skill to use: enter 0 or 1"<< endl;
cin>> skillchoiceindex;

string skillchoice=skills[skillchoiceindex];

printAction(skillchoice,opponent);

attack(opponent);

}

