#include <bits/stdc++.h>
using namespace std;
int main()
{

    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char name[] = "Aritra";

    string title = "Adhikary";

    cout << name[1];

    cout << name << " " << title << endl;

    char clg[10];

    cin >> clg; // It only take a single word before a space

    cout << "College: " << clg << endl;

    char city[20];

    cin.getline(city, 20, '#'); // last agument is the character where it stops taking input

    cout << city << endl;

    return 0;
}