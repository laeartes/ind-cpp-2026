#include "Character.h"
#include <cassert>

void testNormal(){

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
    std::cout << "testNormal passed\n";

}

void testStaticArr() {
    Character arr[3] = {
        Character("Statinis Vienas"),
        Character("Statinis Du", 200, 5),
        Character("Statinis Trys", 999)
    };

    assert(Character::getAliveCount() == 3);

    arr[0].takeDamage(50);
    assert(arr[0].getHealth() == 50);

    arr[1].heal(300);
    assert(arr[1].getHealth() == 500);

    arr[2].levelUp();
    assert(arr[2].getLevel() == 2);

    arr[0].takeDamage(999999); 
    assert(Character::getAliveCount() == 2);

    arr[1].takeDamage(-5); // negative - no change
    assert(arr[1].getHealth() == 500);

    arr[2].heal(-1); // negative - no change
    assert(arr[2].getHealth() == 999);

    arr[2].printStatus();
    std::cout << "testStaticArr passed\n";
} 

void testDynamicArr() {
    Character** arr = new Character*[3];
    arr[0] = new Character("Dinaminis Vienas");
    arr[1] = new Character("Dinaminis Du", 300, 10);
    arr[2] = new Character("Dinaminis Trys", 750, 3);

    assert(Character::getAliveCount() == 3);

    arr[0]->takeDamage(80);
    assert(arr[0]->getHealth() == 20);

    arr[1]->heal(200);
    assert(arr[1]->getHealth() == 500);

    arr[2]->levelUp();
    arr[2]->levelUp();
    assert(arr[2]->getLevel() == 5);

    arr[0]->takeDamage(999999); 
    assert(Character::getAliveCount() == 2);

    arr[0]->takeDamage(100); // alr dead
    assert(Character::getAliveCount() == 2);

    arr[1]->takeDamage(999999);
    assert(Character::getAliveCount() == 1);

    arr[2]->printStatus(); 

    for (int i = 0; i < 3; i++)
        delete arr[i];
    delete[] arr;

    std::cout << "testDynamicArr PASSED\n";
}


int main(){

    testNormal();
    assert(Character::getAliveCount() == 0);
    testStaticArr();
    assert(Character::getAliveCount() == 0);
    testDynamicArr();
    assert(Character::getAliveCount() == 0);
    std::cout << "all tests passed\n";
    return 0;



}