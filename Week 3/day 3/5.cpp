
///PROBLEM LINK ->   https://codeforces.com/problemset/problem/1669/E

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

vector<string> biger(string s)
{

    vector<string>ar;
    string s1 = s;
    for(int i=s[1]+1; i<='k'; i++)
    {
        s1[1] =i;
        ar.push_back(s1);

    }

    s1 = s;
    for(int i=s[0]+1; i<='k'; i++)
    {
        s1[0] =i;
        ar.push_back(s1);

    }

    return ar;

}
void solve()
{
    int n;
    cin>>n;
    string s;
    unordered_map<string,int>m;
    vector<string>all;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        m[s]++;
        all.push_back(s);
    }


    ll ans=0;
    for(int i=0; i<n; i++)
    {
        vector<string>ar = biger( all[i]);
        for(auto i:ar)
        {
            ans+=m[i];
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)    solve();
    return 0;

}
