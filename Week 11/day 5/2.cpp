/*
*/
///PROBLEM LINK ->
#include<bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using PBDS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const double PI =  3.1415926535897932384626433832795;
//.......global.........
void ASHIK_ASLAM()
{
    ll n;
    cin>>n;
    vector<bool>visited(n+1,false);
    vector<ll>ans;
    for(ll i=1; i<=n; i++)
    {
        ll now =i;
        if(visited[now]==false && now*2<=n)
        {
            ans.push_back(now);
            visited[now]=true;
            while(now*2<=n)
            {
                ans.push_back(now*2);
                visited[now*2]=true;
                now*=2;
            }
        }
    }
    for(ll i=1; i<=n; i++)if(visited[i]==false)ans.push_back(i);
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) ASHIK_ASLAM();
    return 0;
}