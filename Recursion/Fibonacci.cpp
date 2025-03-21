#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

long long fiboWithDP(int n, vector<long long> &dp)
{

    if (n <= 1)
    {
        dp[n] = n;
        return n;
    }

    if (dp[n - 1] == -1)
    {
        dp[n - 1] = fiboWithDP(n - 1, dp);
    }
    if (dp[n - 2] == -1)
    {
        dp[n - 2] = fiboWithDP(n - 2, dp);
    }

    return dp[n - 1] + dp[n - 2];
}

int main()
{
    int n = 100;
    vector<long long> dp(n + 1, -1);
    cout << fiboWithDP(n, dp);
    return 0;
}