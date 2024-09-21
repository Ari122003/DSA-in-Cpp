#include <bits/stdc++.h>
using namespace std;

class User
{
private:
    string password;

public:
    string name;
    string email;
    long long phone_number;

    User(string name, string email, long long phone_number, string password)
    {
        this->name = name;
        this->email = email;
        this->phone_number = phone_number;
        this->password = password;
    }
};
int main()
{
    User user("Aritra", "aa@gmail.com", 7980554639, "aaa123");
    cout << "Name: " << user.name << endl;
    cout << "Email: " << user.email << endl;
    cout << "Phone Number: " << user.phone_number << endl;

    return 0;
}