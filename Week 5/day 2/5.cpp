
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1426/problem/C

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
    ll sq = sqrt(n);
    if(n==1)cout<<0<<endl;
    else if(n%sq==0)cout<<sq-1 + n/sq -1<<endl;
    else cout<<sq-1 + n/sq<<endl;




}
int main()
{
    Faster ;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
