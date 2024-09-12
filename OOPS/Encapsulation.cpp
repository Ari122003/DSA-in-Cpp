#include <bits/stdc++.h>
using namespace std;

class Account
{

private:
    double balance; // These are hidden in other scopes , this is called Encapsulation
    string password;

public:
    string accounId;
    string userName;
};
int main()
{
    Account myAccount;
    // myAccount.balance is not accessible
    return 0;
}