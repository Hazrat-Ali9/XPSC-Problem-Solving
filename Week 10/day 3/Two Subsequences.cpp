/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1602/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
//.......global.........
void solve()
{
    string s;
    cin>>s;
    char  a = 'z';
    ll ind;
    for(ll i=0; i<s.size(); i++)if(a>=s[i])
        {
            a=s[i];
            ind = i;
        }
    cout<<a<<" ";
    for(ll i=0; i<s.size(); i++)if(i!=ind)cout<<s[i];
    cout<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
