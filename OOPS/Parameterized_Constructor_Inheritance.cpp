#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;

    Animal(int a)
    {
        age = a;
    }

    void eat()
    {
        cout << "Animal eating." << endl;
    }
};

class Dog : public Animal
{

public:
    string breed;

    Dog(int age, string breed) : Animal(age)
    {
        this->breed = breed;
    }

    void bark()
    {
        cout << "Woof, Woof!" << endl;
    }
};

int main()
{
    Dog d(10, "Beagle");

    d.eat();
    d.bark();

    cout << "Dog's age: " << d.age << endl;
    cout << "Dog's breed: " << d.breed << endl;

    return 0;
}