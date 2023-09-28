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
    string s1;
    string s2;
    vector<int>a1;
    vector<int>a2;
    cin>>s1;
    cin>>s2;
    for(int i=0; i<n; i++)
    {
        if(s1[i]=='R')a1.push_back(1);
        else a1.push_back(2);
    }

    for(int i=0; i<n; i++)
    {
        if(s2[i]=='R')a2.push_back(1);
        else a2.push_back(2);
    }

    for(int i=0; i<n; i++)
    {
        if(a1[i]!=a2[i])
        {
            no;
            return ;
        }
    }
    yes;
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
