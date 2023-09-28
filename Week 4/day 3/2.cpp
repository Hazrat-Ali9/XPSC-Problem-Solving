
/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1714/problem/C

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
    vector<int>ar= {1,2,3,4,5,6,7,8,9};
    int need=n;
    vector<int>ans;
    int r =8;
    while( need!=0)
    {
        if(need>=ar[r])
        {
            need-=ar[r];
            ans.push_back(ar[r]);
        }
        r--;
    }
    for(int i=ans.size()-1; i>=0; i--)cout<<ans[i];

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
