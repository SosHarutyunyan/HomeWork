#include "job.h"
int main()
{
    employee obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].set_inf();
    }
    std::cout << std::endl;
    std::cout << "Name"
              << "     "
              << "Address"
              << "     "
              << "Year"
              << "     "
              << "Salary" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        obj[i].get_inf();
    }
}