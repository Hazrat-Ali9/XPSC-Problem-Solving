#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n;
    cin>>n;
    ll a[n+1];
    ll sum=0;
    ll min_od=1e18+5;
    for(ll i=1; i<n; i++)
    {
        ll x;
        cin>>x;
        sum+=x;
    }
    cout<<(n*(n+1))/2 -sum;
    return 0;
}
