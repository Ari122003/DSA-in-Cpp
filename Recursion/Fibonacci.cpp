#include <bits/stdc++.h>
using namespace std;

int fibonacci(int a)
{

    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }

    return fibonacci(a - 1) + fibonacci(a - 2);
}

int fibo_with_dp(int a, vector<int> &dp)
{

    // basic recursion

    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }

    if (dp[a] != -1)
        return dp[a];

    return dp[a] = fibo_with_dp(a - 1, dp) + fibo_with_dp(a - 2, dp);
}

int main()
{

    // dp tabulation .

    // dp memo

    int a;
    cin >> a;

    vector<int> dp(a + 1, -1);

    // int dp[100];

    // memset(dp,-1,sizeof(dp));
    //  cout << fibonacci(a);

    cout << fibo_with_dp(a, dp) << endl;
    return 0;
}