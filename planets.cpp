#include <string>
#include "planets.h"
int main()
{
    std::string name;
    std::cout << "Enter the planet name " << std::endl;
    std::getline(std::cin, name);
    long double massa;
    double radius;
    std::cout << "Enter the massa and the radius of planet" << std::endl;
    std::cin >> massa >> radius;
    std::cin.get();
    earth obj;
    obj.set_name(name);
    obj.set_massa(massa);
    obj.set_radius(radius);
    std::cout << obj.get_name() << std::endl;
    std::cout << obj.get_gravity(massa, radius) << std::endl;
}