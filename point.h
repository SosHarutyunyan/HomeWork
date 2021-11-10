#include <iostream>
#ifndef _POINT_
#define _POINT_

class point
{
private:
    double x, y;

public:
    void set_coor()
    {
        std::cout << "Pleaze set (x;y) coordinates of point" << std::endl;
        std::cin >> x >> y;
    }
    void get_coor()
    {
        std::cout << "Coordinates of the new point is" << std::endl;
        std::cout << "(" << x << ";" << y << ")" << std::endl;
    }
    point operator+(const point &oth)
    {
        point obj;
        obj.x = this->x + oth.x;
        obj.y = this->y + oth.y;
        return obj;
    }
    point operator-(const point &oth)
    {
        point obj;
        obj.x = this->x - oth.x;
        obj.y = this->y - oth.y;
        return obj;
    }
    point &operator=(const point &oth)
    {
        this->x = oth.x;
        this->y = oth.y;

        return *this;
    }
};

#endif //_POINT_