#include <iostream>
using namespace std;

class Animal
{
public:
    void walk()
    {
        cout << "Walking" << endl;
    }
};

class Human
{
public:
    void speak()
    {
        cout << "Speak" << endl;
    }
};

class Man : public Animal, public Human
{
public:
    int age;
};

int main()
{
    Man Aritra;

    Aritra.walk();
    Aritra.speak();

    return 0;
}