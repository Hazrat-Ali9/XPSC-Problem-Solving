
/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/ALTTAB

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
    int n;
    cin>>n;
    vector<string>s(n);
    map<string,int>m;
    for(int i=0; i<n; i++)cin>>s[i];


    for(int i=n-1; i>=0; i--)
    {
        if(m.find(s[i])==m.end())
        {
            m[s[i]]=1;
            cout<<s[i][s[i].size()-2];
            cout<<s[i][s[i].size()-1];
        }

    }
}
int main()
{
    Faster ;
    ll t = 1;
   // cin>>t;

    while(t--) solve();
    return 0;
}
