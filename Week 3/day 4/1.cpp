
///PROBLEM LINK ->  https://codeforces.com/contest/1790/problem/A

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
    int ans =0;
    string s ="314159265358979323846264338327" ;
    string s1;
    cin>>s1;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]!=s[i])break;
        else ans++;

    }

    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
