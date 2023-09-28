
//PROBLEM LINK ->  https://codeforces.com/contest/1676/problem/C

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

int move_counter(string s1,string s2)
{

    int n=s1.size();
    int ans=0;
    for(int i=0; i<n; i++)ans = ans+ abs(s1[i]-s2[i]);
    return ans;
}

void solve()
{
    int n,m,ans=1e9;
    cin>>n>>m;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ans = min(move_counter(s[i],s[j]),ans);
        }
    }
    cout<<ans<<endl;
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
