#include <iostream>
#include <string>
#include <fstream>

// find all of the occurences of s1 and replace them by s2
// substr will alllow us to copy past the good parts of the line
// we will skip all of the s1 content in other case.
void  findAndReplace(std::string& line, std::string& s1, std::string& s2)
{
    size_t  find = line.find(s1);
    size_t  len = s1.length();
    while (find != std::string::npos)
    {
        line = line.substr(0, find) + s2 + line.substr(find + len);
        find = line.find(s1, find + s2.length());
    }
}

// find seach the first occurence of s1 and return a ptr of the occurrence
// Or if none : return std::string::npos
// Size_t found var to represente the pos of the occur in the code
// .replace take the pos of the occur, the len of the replaced and s2
// .find return teh first occur found
void    replace(std::string filename, std::string s1, std::string s2)
{
    std::string line;
    const std::string  replace = filename + ".replace";
    if (filename.empty())
    {
        std::cerr << "Error : please enter a valid filename." << std::endl;
        return ;
    }
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error : failed to open the file. (read)" << std::endl;
        return ;
    }
    std::ofstream newfile(replace);
    if (!newfile.is_open())
    {
        std::cerr << "Error : failed to open the newfile. (write)" << std::endl;
        file.close();
        return ; 
    }
    if (s1.empty())
    {
        while (getline(file, line))
        {
            newfile << line << std::endl;
        }
    }
    else
    {
        while (getline(file, line))
        {
            findAndReplace(line, s1, s2);
            newfile << line << std::endl;
        }
    }
    file.close();
    newfile.close();
}

// argv[1] is filename
// argv[2] is S2
// argv[3] is S2
int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Please enter at least 3 arguments" << std::endl;
        return (1);
    }
    replace ((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
    return (0);
}
