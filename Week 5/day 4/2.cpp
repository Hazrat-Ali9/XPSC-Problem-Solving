
/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1669/problem/G

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
void solvE2(vector<string>&a,ll r,ll c)
{
    for(ll i=0; i<c; i++)
    {
        queue<ll>q;
        for(ll j=r-1; j>=0; j--)
        {
            if(a[j][i]=='o')while(q.size())q.pop();
            else if(a[j][i]=='.')q.push(j);
            else
            {
                if(q.size())
                {
                    a[q.front()][i]='*';
                    a[j][i]='.';
                    q.push(j);
                    q.pop();
                }
            }
        }
    }
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<string>ar;
    string s;
    for(ll i=0; i<n; i++)
    {
        cin>>s;
        ar.push_back(s);
    }

    solvE2(ar,n,m);
    cout<<endl;
    for(auto i:ar)
    {
        for(auto j:i)cout<<j;
        cout<<endl;
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
