#include <iostream>
using namespace std;

class Animal
{
public:
    string type;

    void walk()
    {
        cout << " Walking" << endl;
    }
};

class Dog : public Animal
{

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Beagle : public Dog
{
public:
    string details;
};

int main()
{

    Beagle john;

    john.type = "Pet";
    cout << john.type << endl;

    john.bark();
    john.walk();

        return 0;
}