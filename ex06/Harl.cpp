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
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do" << std::endl << std::endl;
}

void    Harl::info()
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger!" << std::endl << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void    Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::harlFilter(int i)
{
    switch (i)
    {
        case 0:
        {
            (this->*list[0].exec)();
            (this->*list[1].exec)();
            (this->*list[2].exec)();
            (this->*list[3].exec)();
            break ;
        }
        case 1:
        {
            (this->*list[1].exec)();
            (this->*list[2].exec)();
            (this->*list[3].exec)();
            break ;
        }
        case 2:
        {
            (this->*list[2].exec)();
            (this->*list[3].exec)();
            break ;
        }
        case 3:
        {
            (this->*list[3].exec)();
            break ;
        }
    }   
}

void Harl::complain(std::string level)
{
    int i = 0;
    if (!level.empty())
    {
        while (i < 4 && !level.empty())
        {
            if (list[i].level == level)
            {
                harlFilter(i);
                break ;
            }
            i++;
        }
        std::cout << ((i >= 4) ? "[ Probably complaining about insignificant problems ]" : "") << std::endl;
    }
}
