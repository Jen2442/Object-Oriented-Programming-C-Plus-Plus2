#include "RPG.h"
#include <iostream>
#include <string>

using namespace std;

////////////////////////////////////////////////////////

void displaystats(RPG player1, RPG player2){

    printf("%s health; %i\n%s heatlth; %i\n", player1.getName().c_str(),player1.getHealth(),player2.getName().c_str(),player2.getHealth());

}

//////////////////////////////////////////////////////////////////

void displayend(RPG player1,RPG player2){
    if (player1.isAlive()){
        printf("%s has defeated %s!Good Game!\n",player1.getName().c_str(),player2.getName().c_str());
    }
    else{
        printf("%s has defeated %s!Good Game!\n",player2.getName().c_str(),player1.getName().c_str());
    }
}

///////////////////////////////////////////////////////////////


void gameloop(RPG *player1, RPG *player2){
    while (player1->isAlive() && player2->isAlive()){

        displaystats(*player1,*player2);

     printf("%s's turn\n",player1->getName().c_str());
     player1->useSkill(player2);

     cout<<"------------------------------------------------\n";

     displaystats(*player1,*player2);

     printf("%s's turn\n",player2->getName().c_str());
     player2->useSkill(player1);

     cout<<"------------------------------------------------\n";
    }

}

////////////////////////////////////////////////////////////////////////



int main(){

RPG p1=RPG("wiz",70,45,15,"mage");
RPG p2=RPG();

gameloop(&p1,&p2);

displayend(p1,p2);


return 0;


}

