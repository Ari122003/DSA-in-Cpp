#include <iostream>
using namespace std;

class Human
{

private:
    int age;

public:
    float height;
    int weight;

    void setAge(int x)
    {
        age = x;
    }

    void getAge()
    {
        cout << age << endl;
    }
};

class Man : public Human
{
public:
    void setH(float x)
    {
        height = x;
    }
};

class Female : public Human
{
public:
    void setH(float h)
    {
        height = h;
    }
};

int main()
{

    Man Aritra;

    Aritra.setAge(21);

    Aritra.getAge();

    Aritra.setH(5.4);

    cout << Aritra.height << endl;

    Female Mimi;

    Mimi.setH(5.2);

    cout << Mimi.height;

    return 0;
}