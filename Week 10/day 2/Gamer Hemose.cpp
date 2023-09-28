/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1592/problem/A

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
    long long int n,h;
    cin>>n>>h;
    vector<long long int>ar(n);
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    long long int a = ar.back(),b = ar[n-2];
    long long int ans=0;
    if(h<=a)
    {
        cout<<1<<endl;
        return ;
    }
    if(h<=a+b)
    {
        cout<<2<<endl;
        return ;
    }
    ans+=(h/(a+b))*2;
    long long int ned =(h%(a+b)) ;
    if(ned >0)
    {
        ans++;
        ned-=a;
    }
    if(ned >0)ans++;
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
