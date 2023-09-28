
///PROBLEM LINK -> https://codeforces.com/contest/1790/problem/B

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

    int n,s,r;
    cin>>n>>s>>r;
    int mr = s-r;
    int vs = n-1;
    int fn =r/vs;
    int sn = r%vs;

    vector<int>ar;
    for(int i=0; i<n-1; i++)ar.push_back(fn);
    for(int i=0; i<sn; i++)ar[i]++;
    cout<<mr<<" ";
    for(int i:ar)cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
