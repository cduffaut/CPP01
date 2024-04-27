#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
    public:
    Harl();
    void complain(std::string level);

    private:
    typedef struct s_list
    {
        std::string level;
        void    (Harl::*exec)(void);
    }               t_list;
    t_list list[4];
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif