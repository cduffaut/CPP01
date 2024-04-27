#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    Harl    test;
    if (argc == 2)
    {
        test.complain(argv[1]);
    }
}
