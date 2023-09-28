
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1618/problem/C

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
ll gcd(ll x,ll y)
{
    return __gcd(x,y);
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    ll miNO=ar[1];
    ll miNE=ar[0];
    for(ll i=2; i<n; i+=2)miNE = miNE= gcd(miNE,ar[i]);
    for(ll i=3; i<n; i+=2)miNO =miNO= gcd(miNO,ar[i]);
    ll flag1=1;
    ll flag2=1;
    for(ll i=0; i<n; i+=2)
    {
        if(ar[i]%miNE!=0)
        {
            flag1=0;
            break;
        }
    }
    for(ll i=1; i<n; i+=2)
    {
        if(ar[i]%miNO!=0)
        {
            flag2=0;
            break;
        }
    }
    if(flag1==1)
    {
        for(ll i=1; i<n; i+=2)
        {
            if(ar[i]%miNE==0)
            {
                flag1 =0;
                break;
            }
        }
    }
    if(flag2==1)
    {
        for(ll i=0; i<n; i+=2)
        {
            if(ar[i]%miNO==0)
            {
                flag2 =0;
                break;
            }
        }
    }

    if(flag1==1)
    {
        cout<<miNE<<endl;
        return ;
    }
    if(flag2==1)
    {
        cout<<miNO<<endl;
        return ;
    }
    cout<<0<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
