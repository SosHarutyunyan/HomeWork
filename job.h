#include <iostream>
#ifndef _JOB_
#define _JOB_

class employee
{
private:
    std::string name;
    std::string address;
    int year;
    int salary;

public:
    void set_inf()
    {
        std::cout << "Enter the informations of workers" << std::endl;
        std::cin >> name >> address >> year >> salary;
        std::cout << std::endl;
    }
    void get_inf()
    {
        std::cout << name << "     " << address << "     " << year << "     " << salary << std::endl;
    }
};

#endif //_JOB_