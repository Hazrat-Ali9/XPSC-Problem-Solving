//.ink  >> https://codeforces.com/contest/1814/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(k==1 || n%2==0 || n%k == 0)cout<<"YES\n";
        else if(n>k && (n-k)%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;

}