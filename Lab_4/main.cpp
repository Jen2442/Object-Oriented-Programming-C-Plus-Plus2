#include "RPG.h"
#include <iostream>
#include <string>

using namespace std;

void displaystats(RPG player1, RPG player2){

    cout<< RPG.getname();


}

void displayend(RPG player1,RPG player2){
    If(player1->isAlive=true){
    cout<< "Wiz defeated NPC! Good Game! \n";}
    else {
    cout<<"NPC defeated Wiz! Good Game! \n";
    }

}


void gameloop(RPG*player1, RPG*player2){
    while (player1->isAlive=true && player2->isAlive=true){
    cout<<displaystats((*player1),(*player2));
    (*player1).setSkills(player2);
    cout<<"------------------------------------------------\n";

    cout<<displaystats((*player1),(*player2));
    (*player2).setSkills(player1);
    cout<<"------------------------------------------------\n";

}



}



int main(){

/*RPG p1=RPG("wiz",70,45,15,"mage");
RPG p2=RPG();

gameloop(&p1,&p2);
displayend(p1,p2);*/

cout<< RPG.getName();

return 0;





}

