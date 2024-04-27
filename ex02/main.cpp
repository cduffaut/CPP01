#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    //print the adresses of each
    std::cout << "Memory adress of str: " << &str << std::endl;
    std::cout << "Memory adress of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory adress of stringREF: " << &stringREF << std::endl;
    
    std::cout << std::endl;

    // print the value of each
    std::cout << "Memory adress of str: " << str << std::endl;
    std::cout << "Memory adress of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Memory adress of stringREF: " << stringREF << std::endl;
}
