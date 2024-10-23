#include <bits/stdc++.h>
using namespace std;

class Mother
{
public:
    string skinColor;
};

class Father
{
public:
    string height;
};

class Child : public Mother, public Father
{
public:
    string skill;

    Child(string skinColor, string height, string skill)
    {
        this->skinColor = skinColor;
        this->height = height;
        this->skill = skill;
    }
};

int main()
{
    return 0;
}