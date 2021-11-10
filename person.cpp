#include "person.h"
int main()
{
    person obj;
    obj.seter();
    obj.getinf();
    person obj1 = obj;
    obj1.getinf();
    person obj2;
    obj2 = obj;
    obj2.getinf();
}