/*

ther is something unsue full code in solve function 

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1611/problem/B

#include<bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
const ld PI =  3.1415926535897932384626433832795;
//.......global.........
void take_from_here()
{
    ll n;
    cin>>n;
/// link list



/// array
    ll ar1[n];
    sort(ar1, ar1 + n);


/// vector
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    for(ll i=0; i<n; i++)cin>>ar[i];
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());
    auto maxElement = max_element(ar.begin(), ar.end());
    ll mX= * maxElement;

}
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<(a+b)/4<<endl;
        return;
    }


    ll mx = max(a,b);
    ll mn = min(a,b);
    if(mn*3<=mx)
    {
        cout<<mn<<endl;
        return;
    }


    if((mx-mn)&1)mx--;
    ll ans=0;
    ll step= (mx-mn)/2;
    if(step==0)
    {
        cout<<(mn+mx)/4<<endl;
        return;
    }
    ll ned = step*3;
   // cout<<"step = "<<step<<"  mx  = "<<mx<<"  mn = "<<mn<<" need = "<<ned<<endl;
    if(ned<=mx)
    {
        ans+=step;
        mx-=ned;
        mn-=step;
        if(mx+mn >=4)ans+=(mx+mx)/4;
        cout<<ans<<endl;
        return;
    }
    cout<<min(mx/3,mn)<<endl;


}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
