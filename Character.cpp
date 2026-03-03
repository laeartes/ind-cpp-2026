#include <Character.h>


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

    if(health > 0) aliveCount--; //numires ir taip destruktyvus
    std::cout << "Character " << this->name << " destroyed\n";

}

void Character::takeDamage(int dmg){

    if (health <= 0) return; //You Can't Kill What's Already Dead
    health -= dmg;
    std::cout << name << " taken " << dmg << " damage\n";
    if (health <= 0){
        health = 0;
        die();
    }    

}

void Character::heal(int amount){

    if (health<=0) return; //not even sure if this gets triggered, but extra safety
    health += amount;
    std::cout << name << " healed " << amount << " health\n";

}

void Character::levelUp(){

    level++;
    std::cout << name << " leveled up to " << level;

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

