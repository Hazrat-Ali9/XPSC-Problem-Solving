/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/CHEFODD

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
    ll x,k;
    cin>>x>>k;
    if(k*2>x)no;
    else
    {
        ll odd;
        ll eve;
        if(x&1)
        {
            eve=x>>1;
            odd=eve+1;
        }
        else
        {
            eve=x>>1;
            odd=eve;
        }
        eve-=k;
        odd-=k;
        if(odd&1)no;
        else yes;
    }
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
