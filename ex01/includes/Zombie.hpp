#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie{

    public:
    //Constructor & destructor
        Zombie();
        ~Zombie();

        std::string getName() const;

        void setName(std::string name);
        void announce( void ) const;

    private:
    
        std::string _Name;
};

Zombie* zombieHorde( int N, std::string name );

# endif