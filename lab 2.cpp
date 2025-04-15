#include <iostream>
class Animal
{
public:
    Animal(char const* name): m_name(name) {}

    virtual ~Animal() {}

   
    virtual void make_sound() = 0;

protected:
  
    std::string m_name;
};

class Dog: public Animal
{
public:

    Dog(char const* name): Animal(name) {}

 
    void make_sound() override
    {
        std::cout << m_name << " the dog said: bork!" << std::endl;
    }

  
    void wag()
    {
        std::cout << "*" << m_name << " wags*" << std::endl;
    }
};


class Cat: public Animal
{
public:
    Cat(char const* name): Animal(name) {}

    void make_sound() override
    {
        std::cout << m_name << " the cat said: mow!" << std::endl;
    }

    void purr()
    {
        std::cout << "*" << m_name << " purrs*" << std::endl;
    }
};
