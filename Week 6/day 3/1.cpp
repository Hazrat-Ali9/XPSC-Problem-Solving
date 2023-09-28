/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1005/problem/A

#include<bits/stdc++.h>
using namespace std;
//......... macros.........
#define ull  unsigned long long
#define ll long long
#define ld double
#define pii pair<int,int>
#define F first
#define S  second
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define nl cout<<"\n"
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
//.......global.........
void solve()
{
    ll n;
    cin>>n;
    vector<ll>s(n);
    for(auto &i:s)cin>>i;
    vector<ll>ans;
    ll st=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]==1 && i>0)ans.push_back(s[i-1]);
        if(s[i]==1)st++;
    }
    ans.push_back(s.back());
    cout<<st<<endl;
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
