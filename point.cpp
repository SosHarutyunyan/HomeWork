#include "point.h"
int main()
{
    point obj;
    point obj2;

    obj.set_coor();
    obj2.set_coor();

    point rezult;
    std::cout << "What do you want to do with the First and the Second points, answers: F+S(1) , S-F(2), F-S(3)" << std::endl;
    char operation;
    std::cin >> operation;
    switch (operation)
    {
    case '1':
        rezult = obj + obj2;
        break;
    case '2':
        rezult = obj2 - obj;
        break;
    case '3':
        rezult = obj - obj2;
        break;

    default:
        break;
    };

    rezult.get_coor();
}