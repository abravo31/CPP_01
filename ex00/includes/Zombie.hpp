#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie{

    public:
    //Constructor & destructor
        Zombie(std::string name);
        ~Zombie();

        void announce( void ) const;

    private:
        std::string _Name;
};

Zombie*    newZombie( std::string name );
void       randomChump( std::string name );

# endif