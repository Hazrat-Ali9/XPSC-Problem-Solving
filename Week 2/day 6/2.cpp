#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>a1(n+1);
    vector<ll>a2(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>a1[i];
        a2[i]=a1[i];
    }
    a2[0]=0;
    a1[0]=0;
    sort(a2.begin(),a2.end());

    ll prefix_sum1[n+1];
    ll prefix_sum2[n+1];
    prefix_sum1[0]=0;
    prefix_sum2[0]=0;
    prefix_sum1[1]=a1[1];
    prefix_sum2[1]=a2[1];
    for(int i=2; i<=n; i++) prefix_sum1[i]=a1[i]+prefix_sum1[i-1];
    for(int i=2; i<=n; i++) prefix_sum2[i]=a2[i]+prefix_sum2[i-1];

    ll q;
    cin>>q;
    for(ll i=1; i<=q; i++)
    {
        ll t,l,r;
        ll ans;
        cin>>t>>l>>r;
        if(t==1)
            ans = prefix_sum1[r]-prefix_sum1[l-1];
        else ans =  prefix_sum2[r]- prefix_sum2[l-1];
        cout<<ans<<endl;
    }
    return 0;
}
