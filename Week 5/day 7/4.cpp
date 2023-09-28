/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1838/problem/B

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
    if(n==1 || n==2)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    vector<ll>a(n+1);
    ll ind,indN,ind2;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)ind=i;
        else if(a[i]==n)indN=i;
        else if(a[i]==2)ind2=i;

    }
    if(ind<indN && indN<ind2 || ind2<indN && indN<ind)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    if(ind<ind2 && ind2<indN)
    {
        cout<<ind2<<" "<<indN<<endl;
        return;
    }
    if(ind2<ind && ind<indN)
    {
        cout<<ind<<" "<<indN<<endl;
        return;
    }
    if(indN<ind && ind<ind2)
    {
        cout<<ind<<" "<<indN<<endl;
        return;
    }
    if(indN<ind2 && ind2<ind)
    {
        cout<<ind2<<" "<<indN<<endl;
        return;
    }
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
