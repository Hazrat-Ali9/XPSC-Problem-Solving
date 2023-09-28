/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1843/problem/A

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
    vector<int>ar(n);
    int x;
    for(int i=0; i<n; i++)cin>>ar[i];
    sort(ar.begin(),ar.end());

    int f=0;
    int l =n-1;
    int ans=0;

    while(f < l)
    {
        ans+=(ar[l]-ar[f]);
        l--;
        f++;
    }
    cout <<ans <<"\n";




}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}