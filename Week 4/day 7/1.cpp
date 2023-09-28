/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1741/problem/C

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
    ll ar[n+1];
    for(ll i=1; i<=n; i++)cin>>ar[i];
    ll ans =n;
    ll sum=0;
    for(ll i=1; i<n; i++)
    {
        sum+=ar[i];
        ll len1=0;
        int flag0=0;
        for(ll j=i+1; j<=n; j++)
        {
            ll len2=0;
            ll now_sum=0;
            int flag1 =0;
            while(j<=n && now_sum<sum)
            {
                now_sum+=ar[j];
                len2++;
                if(now_sum==sum)
                {
                    flag1=1;
                    break;
                }
                if(now_sum>sum)break;
                j++;
            }
            if(flag1)
            {
                len1 = max({len1,len2,i});
            }
            else break;
            if(flag1 && j==n)flag0=1;
        }
        if(flag0)ans=min(ans,len1);
    }
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
