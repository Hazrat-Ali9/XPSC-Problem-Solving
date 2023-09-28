
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1611/problem/A

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
    string s;
    cin>>s;
    if((s.back()-48)%2==0)
    {
        cout<<0<<endl;
        return;
    }
    bool there_is_a_even = false;
    for(ll i=0; i<s.size(); i++)
    {
        if((s[0]-48)%2==0)
        {
            cout<<1<<endl;
            return;
        }
        if((s[i]-48)%2==0)
        {
            cout<<2<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
