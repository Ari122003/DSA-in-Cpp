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

        User(User &originalObject)
    {

        password = originalObject.password;
        username = originalObject.username;
        email = originalObject.email;
    }
};
int main()
{
    User user1("password123", "user1@gmail.com", "John Doe");
    User user2(user1);

    cout << "User 2: " << user2.username << ", " << user2.email << endl;
    return 0;
}