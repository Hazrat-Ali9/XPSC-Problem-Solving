///PROBLEM LINK ->   https://codeforces.com/contest/1729/problem/A

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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a-1< abs(c-b)+ c-1)cout<<1<<endl;
    else if(a-1> abs(c-b)+ c-1)cout<<2<<endl;
    else cout<<3<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)    solve();
    return 0;

}
