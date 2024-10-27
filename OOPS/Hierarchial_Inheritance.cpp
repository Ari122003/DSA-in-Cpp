#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    string name;
};

class Engineer : public Human
{
public:
    string stream;

    Engineer(string n, string s)
    {
        name = n;
        stream = s;
    }
};

class Doctor : public Human
{

public:
    string specialization;

    Doctor(string n, string s)
    {
        name = n;
        specialization = s;
    }
};

int main()
{
    Engineer E("Aritra", "ECE");
    Doctor D("XXX", "Cardiologist");

    cout << "Engineer Name: " << E.name << ", Stream: " << E.stream << endl;
    cout << "Doctor Name: " << D.name << ", Specialization: " << D.specialization << endl;
    return 0;
}