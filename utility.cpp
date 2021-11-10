#include "utility.h"
int main()
{
    int x = 6;
    utility A;
    A.set_type();
    std::cout << A.is_integer() << std::endl;
    std::cout << A.is_boolean() << std::endl;
    std::cout << A.is_number() << std::endl;
    std::cout << A.is_float() << std::endl;
    std::cout << A.is_email() << std::endl;
    std::cout << A.is_URL() << std::endl;
}