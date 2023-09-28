/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1512/problem/A


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
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    if(ar[0]!=ar.back())
    {
        if(ar[0]==ar[1])cout<<n<<endl;
        else cout<<1<<endl;
        return;
    }
    for(ll i=1; i<n-1; i++)
    {
        if(ar[i]!=ar[i-1] && ar[i]!=ar[i+1])
        {
            cout<<i+1<<endl;
            return;
        }

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
