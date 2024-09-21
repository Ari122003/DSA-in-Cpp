#include <bits/stdc++.h>
using namespace std;

class User
{
private:
    string password;

public:
    string username;
    string email;

    User(string password, string email, string name)
    {
        this->password = password;
        this->email = email;
        this->username = name;
    }
};
int main()
{
    User user1("password123", "user@example.com", "John Doe");

    // Makes a shallow copy

    User user2(user1); // Default copy constructor
    cout << "User 2: " << user2.username << ", " << user2.email << endl;
    return 0;
}