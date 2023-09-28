
///PROBLEM LINK -> https://codeforces.com/contest/1833/problem/C

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
    vector<ll>even,odd;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x==1 || x%2==1)odd.push_back(x);
        else even.push_back(x);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    if(even.size()==0 || odd.size()==0)yes;
    else if (even[0]>odd[0])yes;
    else no;



}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
