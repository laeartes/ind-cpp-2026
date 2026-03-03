#include <iostream>


class Character{
    private:
        static int nextID;
        static int aliveCount;

        int ID;
        std::string name;
        int health;
        int level;

    public:
        //konstrukting
        Character( const std::string& name, int health = 100, int level = 1);

        //destrukting
        ~Character();

        //veiksmukai
        void takeDamage(int dmg);
        void heal(int amount);
        void levelUp();
        void die(); 

        //info stuff
        void printStatus() const;
        static int getAliveCount();
};



