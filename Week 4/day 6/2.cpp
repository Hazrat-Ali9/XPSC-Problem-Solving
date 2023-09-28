/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1741/problem/B

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
    if(n==1 || n==3)
    {
        cout<<-1<<endl;
        return;
    }
    if(n%2==0)
    {
        for(int i=n; i>=1; i--)cout<<i<<" ";
        cout<<endl;
        return ;
    }

    for(int i=n; i>=n/2 + 2; i--)cout<<i<<" ";




    for(int i=1; i<=n/2 + 1; i++)cout<<i<<" ";

    cout<<endl;









}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
