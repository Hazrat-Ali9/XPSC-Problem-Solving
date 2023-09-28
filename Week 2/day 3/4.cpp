#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        if(x%k==0)
            sum++;
    }
    cout<<sum;
    return 0;
}
