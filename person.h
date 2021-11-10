#include <iostream>
#ifndef _PERSON_
#define _PERSON_

class person
{
private:
    std::string n_name;
    short a_age;
    std::string m_mail;

public:
    person() : n_name{" "}, a_age{0}, m_mail{" "} {}
    person(std::string name, short age, std::string mail) : n_name{name}, a_age{age}, m_mail{mail} {}
    void seter()
    {
        std::cout << "Enter the name, age and the mail of person" << std::endl;
        std::cin >> n_name >> a_age >> m_mail;
    }
    void getinf()
    {
        std::cout << n_name << std::endl;
        std::cout << a_age << std::endl;
        std::cout << m_mail << std::endl;
    }
    person &operator=(const person &ob)
    {
        this->n_name = ob.n_name;
        this->a_age = ob.a_age;
        this->m_mail = ob.m_mail;
        return *this;
    }
    person(const person &ob)
    {
        this->n_name = ob.n_name;
        this->a_age = ob.a_age;
        this->m_mail = ob.m_mail;
    }
};

#endif //_PERSON_