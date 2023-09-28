// https://codeforces.com/contest/1692/problem/B

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
    int a[n];
    ll sum=0;
    map<int,int>fre;
    map<int,int>visted;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        fre[a[i]]++;
    }


    int od=0;
    int eve=0;
    for(auto i:fre)
    {
        if(i.second%2==1)od++;
        else eve++;
    }
    cout<<od+(eve/2)*2<<endl;
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
