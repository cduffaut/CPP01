#include "Harl.hpp"

Harl::Harl()
{
    list[0].level = "DEBUG";
    list[0].exec = &Harl::debug;
    list[1].level = "INFO";
    list[1].exec = &Harl::info;
    list[2].level = "WARNING";
    list[2].exec = &Harl::warning;
    list[3].level = "ERROR";
    list[3].exec = &Harl::error;
}

void    Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do" << std::endl;
}

void    Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    static int i = -1;

    if (i < 4 && !level.empty())
    {
        list[++i].level == level ? (this->*list[i].exec)() : complain(level);
    }
    i = 0;
}