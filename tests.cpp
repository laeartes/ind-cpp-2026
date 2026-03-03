#include "Character.h"
#include <cassert>

int main(){

    Character c1("Jonatanas Kazlauskas");
    Character c2("Tomas Tomatietis", 120, 30);
    Character c3("Zygimantas Rauba", 5000);

    assert(Character::getAliveCount() == 3);
    assert(c1.getAliveCount() == 3);
    assert(c2.getAliveCount() == 3);
    assert(c3.getAliveCount() == 3);


    c1.takeDamage(60);
    c2.takeDamage(-10);
    c3.takeDamage(0);

    assert(c1.getHealth() == 40);
    assert(c2.getHealth() == 120); //shouldnt have changed if negative
    assert(c3.getHealth() == 5000);


    c1.heal(100);
    c2.heal(-1000);
    c3.heal(5161);

    assert(c1.getHealth() == 140);
    assert(c2.getHealth() == 120); //shouldnt have changed if negative
    assert(c3.getHealth() == 10161);


    c1.levelUp();
    c2.levelUp();
    //not leveling up c3

    assert(c1.getLevel() == 2);
    assert(c2.getLevel() == 31);
    assert(c3.getLevel() == 1);

    c1.takeDamage(465456); //lets kill jonatanas kazlauskas
    
    assert(Character::getAliveCount()==2); //:(

    c1.takeDamage(6544564); //shouldnt do anything
    assert(Character::getAliveCount()==2);

    c2.takeDamage(645656);
    assert(Character::getAliveCount()==1);

    //zygimantas rauba has won?

    c3.printStatus();

}