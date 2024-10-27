#include <bits/stdc++.h>
using namespace std;

class Car
{

public:
    string brand;
    virtual void getInfo() = 0;
};

class FamilyCar : public Car
{

public:
    string model;

    void getInfo()
    {
        cout << "Family Car Info: " << brand << " " << model << endl;
    }

    FamilyCar(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
    }
};
int main()
{
    FamilyCar car("SUZUKI", "Swift");

    car.getInfo();
    return 0;
}