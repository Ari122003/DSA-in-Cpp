#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;

    void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Mamal : public Animal
{
public:
    int height;

    void birth()
    {
        cout << "Mammal gives birth" << endl;
    }
};

class Dog : public Mamal
{
public:
    int weight;

    void run()
    {
        cout << "Dog runs at 10 km/hr" << endl;
    }
};

class Labrador : public Dog
{
public:
    string color;

    Labrador(int age, int height, int weight, string color)
    {
        this->age = age;
        this->height = height;
        this->weight = weight;
        this->color = color;
    }

    void bark()
    {
        cout << "Labrador barks loudly" << endl;
    }
};

int main()
{
    Labrador lab(12, 5, 20, "White");
    cout << lab.age << endl;
    cout << lab.height << endl;
    cout << lab.weight << endl;
    cout << lab.color << endl;
    lab.sound();
    lab.birth();
    return 0;
}