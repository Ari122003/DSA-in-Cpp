#include <bits/stdc++.h>
using namespace std;

class Car
{

public:
    string brand;
    int number;

    Car(string brand, int number)
    {
        this->brand = brand;
        this->number = number;
    }
};
int main()
{
    Car *myCar = new Car("BMW", 12345);
    cout << "Brand: " << myCar->brand << endl;
    cout << "Number: " << myCar->number << endl;
    return 0;
}