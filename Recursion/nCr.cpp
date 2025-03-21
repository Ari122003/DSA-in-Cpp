#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{

    if (r == 0 || n == r)
    {
        return 1;
    }

    return nCr(n - 1, r) + nCr(n - 1, r - 1);
}

long long ncrWithDP(int n, int r, vector<vector<long long>> &dp)
{
    if (r == 0 || n == r)
    {

        return 1;
    }

    if (dp[n][r] == -1)
    {
        dp[n][r] = ncrWithDP(n - 1, r, dp) + ncrWithDP(n - 1, r - 1, dp);
    }

    return dp[n][r];
}
int main()
{
    int n = 100;
    int r = 6;
    vector<vector<long long>> dp(n + 1, vector<long long>(r + 1, -1));
    cout << ncrWithDP(n, r, dp);
    return 0;
}