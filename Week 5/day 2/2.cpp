
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1642/problem/C

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
    ll n,x;
    cin>>n>>x;
    vector<ll>ar;
    unordered_map<ll,ll>m;
    ll num;
    ll cuple=0;
    for(ll i=0; i<n; i++)
    {
        cin>>num;
        ar.push_back(num);
        m[num]++;
    }
    sort(ar.begin(),ar.end());
    for(ll i=0; i<n; i++)
    {
        if(m[ar[i]*x]>0 && m[ar[i]]>0)
        {
            cuple++;
            m[ar[i]*x]--;
            m[ar[i]]--;
        }
    }
    cout<<n-cuple*2<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
