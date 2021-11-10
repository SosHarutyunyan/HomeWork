#include <iostream>
class earth
{
private:
    std::string name;
    double distanse;
    double radius;
    double massa;

public:
    void set_name(std::string n_name)
    {
        n_name = name;
    }
    std::string get_name()
    {
        return name;
    }
    void set_distanse(double d_distanse)
    {
        d_distanse = distanse;
    }
    double get_distanse()
    {
        return distanse;
    }
    void set_radius(double r_radius)
    {
        r_radius = radius;
    }
    double get_radius()
    {
        return radius;
    }
    void set_massa(long double m_massa)
    {
        m_massa = massa;
    }
    long double get_massa(long double m_massa)
    {
        return massa;
    }

    double get_gravity(double massa, double radius)
    {
        double g;
        g = 0.0000000000667 * massa / (radius * radius);

        return g;
    }
};
