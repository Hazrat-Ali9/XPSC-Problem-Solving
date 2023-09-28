/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1702/problem/A

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


    if(n>=1e9)cout<<n-1000000000<<endl;
    else  if(n>=1e8)cout<<n-100000000<<endl;
    else  if(n>=1e7)cout<<n-10000000<<endl;
    else  if(n>=1e6)cout<<n-1000000<<endl;
    else  if(n>=1e5)cout<<n-100000<<endl;
    else  if(n>=1e4)cout<<n-10000<<endl;
    else  if(n>=1e3)cout<<n-1000<<endl;
    else  if(n>=1e2)cout<<n-100<<endl;
    else  if(n>=1e1)cout<<n-10<<endl;
    else  if(n>=1)cout<<n-1<<endl;




}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
