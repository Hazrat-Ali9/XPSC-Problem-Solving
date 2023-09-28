
/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1744/problem/A

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
    map<int,char>m;
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<char>s(n);
    for(int i=0; i<n; i++)cin>>ar[i];
    for(int i=0; i<n; i++)cin>>s[i];

    for(int i=0; i<n; i++)
    {
        if(m.find(ar[i])==m.end()) m[ar[i]] = s[i];
        else if(m[ar[i]] != s[i])
        {
            no;
            return;
        }

    }
    yes;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;

    while(t--) solve();
    return 0;
}
