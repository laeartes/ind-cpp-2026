#include "Character.h"


//static vars
int Character::nextID = 1;
int Character::aliveCount = 0;

//konstrukting
Character::Character(const std::string& name, int health, int level)
    : ID(nextID++), name(name), health(health), level(level){

    aliveCount++;
    std::cout << "Character " << this->name << " created with ID " << this->ID << "\n";

}


//destrukting
Character::~Character(){

    if(health >= 0) aliveCount--;
    std::cout << "Character " << this->name << " destroyed\n";

}

void Character::takeDamage(int dmg){

    if (health <= 0){
        //You Can't Kill What's Already Dead
        std::cout << "[WARNING]: already dead: " << ID << " aka " << name << "\n";
        return;
    }
    if (dmg < 0){
        std::cout << "[WARNING]: negative damage\n";
        return;
    }
    health -= dmg;
    std::cout << name << " taken " << dmg << " damage\n";
    if (health <= 0){
        health = 0;
        die();
    }    

}

void Character::heal(int amount){

    if (health<=0){//not even sure if this gets triggered, but extra safety
        std::cout << "[WARNING]: already dead: " << ID << " aka " << name << "\n";
        return;
    }

    if(amount < 0){

        std::cout << "[WARNING]: negative healing amount\n";
        return;

    }

    health += amount;
    std::cout << name << " healed " << amount << " health\n";

}

void Character::levelUp(){

    level++;
    std::cout << name << " leveled up to " << level << "\n";;

}

void Character::die(){

    aliveCount--;
    std::cout << name << " has died\n";

}

void Character::printStatus() const{

    std::cout << "ID: " << ID << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Level: " << level << "\n";
    std::cout << "Alive count: " << aliveCount << "\n";

}


int Character::getAliveCount(){

    return aliveCount;

}

int Character::getHealth(){

    return health;

}

int Character::getLevel(){

    return level;

}