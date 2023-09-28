#include<bits/stdc++.h> // link >> https://codeforces.com/contest/749/problem/A
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if(n & 1)
    {
        cout<<1+(n-3)/2<<endl;
        cout<<3<<" ";
        for(ll i=1; i<=(n-3)/2; i++)cout<<2<<" ";
    }

    else
    {
        cout<<n/2<<endl;
        for(ll i=1; i<=n/2; i++)cout<<2<<" ";
    }
    return 0;
}
