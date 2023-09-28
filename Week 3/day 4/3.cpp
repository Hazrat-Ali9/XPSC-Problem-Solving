
///PROBLEM LINK -> https://codeforces.com/contest/1790/problem/C

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
    vector<vector<int>>ar(n);
    int x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            cin>>x;
            ar[i].push_back(x);
        }
    }
    int fist_nu =0;
    for(int i=0; i<n; i++)
    {
        if(fist_nu == ar[i][0])
        {
            break;
        }
        fist_nu = ar[i][0];
    }


    for(int i=0; i<n; i++)
    {
        if(ar[i][0]!=fist_nu)
        {
            cout<<fist_nu<<" ";
            for(auto j:ar[i])cout<<j<<" ";
            cout<<endl;
            break;
        }

    }



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
