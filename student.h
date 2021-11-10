#include <iostream>
#ifndef _STUDENT_
#define _STUDENT_

class student
{
private:
    char name[20];
    char sname[40];

public:
    void set_name()
    {
        std::cout << "Enter the name" << std::endl;
        std::cin.getline(name, 20);
    }
    void set_sname()
    {
        std::cout << "Enter the surname" << std::endl;
        std::cin.getline(sname, 40);
    }
    void get_names()
    {
        std::cout << name << std::endl;
        std::cout << sname << std::endl;
    }
};
#endif //_STUDENT_