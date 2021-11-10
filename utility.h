#include <iostream>
#include <string>
#include <regex>
#ifndef _UTILITY_
#define _UTILITY_

class utility
{
private:
    std::string type;

public:
    void set_type()
    {
        std::cout << "Enter the word, simbol or number please" << std::endl;
        std::cin >> type;
    }
    bool is_number()
    {
        std::cout << "Your word type is Number: ";
        int count = 0;
        for (int i = 0; i < type.size(); ++i)
        {
            if (type[0] == '.' || type[i] < 45 || type[i] > 58 || type[i + 1] == '-')
                return false;
            if (type[i] == '.')
            {
                count++;
            }
        }
        if (count > 1)
        {
            return false;
        }
        return true;
    }
    bool is_integer()
    {
        std::cout << "Your word type is Integer: ";
        for (int i = 0; i < type.size(); i++)
        {

            if (type[i] < 47 || type[i] > 58)
                return false;
        }

        return true;
    }
    bool is_float()
    {
        std::cout << "Your word type is Float: ";
        int count = 0;
        for (int i = 0; i < type.size(); ++i)
        {
            if (type[0] == '.' || type[i] < 45 || type[i] > 58 || type[i + 1] == '-')
                return false;
            if (type[i] == '.')
            {
                count++;
            }
        }
        if (count != 1)
        {
            return false;
        }
        return true;
    }
    bool is_boolean()
    {
        std::cout << "Your word type is Boolean: ";
        if (type == "true" || type == "false")
            return true;
        return false;
    }
    bool is_email()
    {
        std::cout << "Your word type is Email: ";
        std::regex re("(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$)");
        return regex_search(type, re);
    }
    bool is_URL()
    {
        std::cout << "Your word type is URL: ";
        std::regex re("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
        return regex_search(type, re);
    }
};

#endif //_UTILITY_