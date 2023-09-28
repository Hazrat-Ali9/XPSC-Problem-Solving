#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+1];
        ll sum=0;
        ll min_od=1e18+5;
        for(int i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            sum+=x;
            if(x==1)min_od=1;
            else if(x%2==1)min_od=min(x,min_od);
        }
        if(sum==1)cout<<0;
        else if(sum%2==1)cout<<sum-min_od;
        else cout<<sum;
    }
    return 0;
}
