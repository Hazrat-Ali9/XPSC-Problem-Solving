#include <bits/stdc++.h>//// https://cses.fi/problemset/task/1641/
using namespace std;
#define ll long long
int main()
{
    ll n,sum;
    cin>>n>>sum;
    vector<pair<ll,ll>>ar;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        ar.push_back({x,i});
    }
    sort(ar.begin(),ar.end());
    for(ll i=0; i<ar.size(); i++)
    {
        ll ned  = sum - ar[i].first;
        if(ned<1)continue;
        ll l = i+1,h=ar.size()-1;
        while(l<h)
        {
            if(ar[l].first+ar[h].first==ned)
            {
                cout<<ar[i].second<<" "<<ar[l].second<<" "<<ar[h].second;
                return 0;
            }
            else if(ar[l].first+ar[h].first<ned)l++;
            else h--;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}
