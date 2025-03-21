#include<bits/stdc++.h>
using namespace std;

int count = 0;
void solve(int n , int A , int B , int C){
        
    if(n>0){
            
        solve(n-1,A,C,B);
        count++;
        solve(n-1,B,A,C);
        
        
    }
}
int main()
{
 return 0;
}