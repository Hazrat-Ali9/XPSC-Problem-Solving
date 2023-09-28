/*

*/

///PROBLEM LINK -> https://codeforces.com/problemset/problem/1097/B

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
    vector<ll>ro(n);
    for(auto &i:ro)cin>>i;
    vector<vector<ll>>ar;
    ll lim=pow(2,n);
    for(ll i=0; i<lim; i++)
    {
        vector<ll>ar1;
        ll now =i;
        ll ind = 1;
        while(ind<=n)
        {
            ar1.push_back((now&1));
            now=now>>1;
            ind++;
        }
        ar.push_back(ar1);
    }
    for(auto i:ar)
    {
        ll    sum=0;
        for(ll j=0; j<n; j++)
        {
            if(i[j]==1)
            {
                if(sum+ro[j]>=360)
                {
                    sum=sum+ro[j]-360;
                }
                else if (sum+ro[j]<360)
                {
                    sum+=ro[j];
                }
            }
            else
            {
                if(sum-ro[j]<0)
                {
                    sum=sum-ro[j]+360;
                }
                else if (sum-ro[j]>=0)
                {
                    sum-=ro[j];
                }
            }
        }
        if(sum==0)
        {
            yes;
            return;
        }
    }
    no;
}
int main()
{
    Faster ;
    ll t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
