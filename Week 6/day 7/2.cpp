/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/ABPLUSC?tab=submissions
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
    ll x;
    cin>>x;
    if(x==1)
    {
        cout<<-1<<endl;
        return;
    }
    ll lim=1000000;
    if(x<=lim)
    {
        cout<<x-1<<" "<<1<<" "<<1<<endl;
        return;
    }
    ll modu = x%lim;
    if(modu>0)
    {
        cout<<lim<<" "<<x/lim<<" "<<modu<<endl;
        return;
    }
    cout<<lim<<" "<<x/lim -1<<" "<<lim<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
