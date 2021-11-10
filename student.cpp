#include "student.h"
int main()
{

    student obj[5];
    for (int i = 0; i < 5; i++)
    {
        obj[i].set_name();
        obj[i].set_sname();
    }
    std::cout << std::endl;
    for (int i = 0; i < 2; i++)
    {

        obj[i].get_names();
        std::cout << std::endl;
    }
}