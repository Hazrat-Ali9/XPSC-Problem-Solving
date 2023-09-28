
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1744/problem/B

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
    ll n,q,x,qt;
    cin>>n>>q;
    vector<ll>ar(n);
    ll sum=0;
    ll ev=0;
    ll od =0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)ev++;
        else od++;
        sum+=ar[i];
    }
    for(int i=0; i<q; i++)
    {
        cin>>qt>>x;
        if(qt==0)
        {
            sum+=x*ev;
            cout<<sum<<endl;
            if(x%2==1)
            {
                ev=0;
                od=n;
            }

        }

        else
        {
            sum+=x*od;
            cout<<sum<<endl;
            if(x%2==1)
            {
                ev=n;
                od=0;
            }
        }

    }


}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
