#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<long long int>v;
bool pl_chek(long long int n)
{
    string s = to_string(n);
    string s1 = s;
    reverse(s.begin(),s.end());
    return s==s1;
}
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll freq[35000]= {0};
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<v.size(); j++)
        {
            ll k=a[i] ^ v[j];
            if(k > (1<<15))
                continue;
            ans+=freq[k];
        }
    }
    cout<<(ans+n)/2<<endl;
}
int main()
{
    for(long long int i=0; i<=1<<15; i++)
        if(pl_chek(i))v.push_back(i);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
