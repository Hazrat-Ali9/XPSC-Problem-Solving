/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1618/problem/A
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
    vector<ll>ans;
    vector<ll>ar(7);
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    ans.push_back(ar[0]);
    for(int i =1; i<7; i++)
    {
        for(int j =1; j<6; j++)
        {
            if(ar[i]+ar[j]== ar[5])
            {
                ans.push_back(ar[i]);
                ans.push_back(ar[j]);
                for(auto i:ans)cout<<i<<" ";
                cout<<endl;
                return;
            }
        }
    }


}

int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
