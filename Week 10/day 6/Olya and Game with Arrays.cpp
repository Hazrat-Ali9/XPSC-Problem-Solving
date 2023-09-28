/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1859/submission/218632288

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
//.......global.........
void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>>ar(n);
    ll ans1 = inf;
    vector<ll>ans2;
    for(ll i=0; i<n; i++)
    {
        ll ele;
        cin>>ele;
        for(ll  j =0; j<ele; j++)
        {
            ll x;
            cin>>x;
            ar[i].push_back(x);
        }
        sort(ar[i].begin(),ar[i].end());
        ans1=min(ar[i][0],ans1);
        if(ele>1) ans2.push_back(ar[i][1]);
    }
    sort(ans2.begin(),ans2.end(),greater<ll>());
    ll aNs=ans1;
    for(ll i=0; i<n-1; i++)aNs+=ans2[i];
    cout<<aNs<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    scanf("%ll",&t);
    while(t--) solve();
    return 0;
}
