/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1690/problem/D


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
    ll n,k;
    string s;
    cin>>n>>k>>s;
    ll need = 1e18;
    ll i=0;
    ll j=0;
    ll now=0;
    while(j<n)
    {
        if(s[j]=='W')now++;
        if(j<k-1)j++;
        else
        {
            need = min(now,need);
            if(s[i]=='W')now--;
            i++;
            j++;
        }
    }
    cout<<need<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
