#include "Zombie.hpp"

int main( void )
{
    Zombie *foo;

    foo = newZombie("foo");
    foo->announce();
    randomChump("chump");
    randomChump("bar");
    delete foo;
    return (0);
}