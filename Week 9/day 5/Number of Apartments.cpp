/*

*/

///PROBLEM LINK ->  https://codeforces.com/problemset/problem/1430/A

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
    ll n;
    cin>>n;

    for(ll i=3; i<=n; i+=3)
    {
        ll now = i;
        ll nd = n-now;
        if(n%3==0)
        {
            cout<<n/3<<" "<<0<<" "<<0<<endl;
            return;
        }
        if(nd%5==0)
        {
            cout<<i/3<<" "<<nd/5<<" "<<0<<endl;
            return;
        }
        if(nd%7==0)
        {
            cout<<i/3<<" "<<0<<" "<<nd/7<<endl;
            return;
        }
    }

    for(ll i=5; i<=n; i+=5)
    {
        ll now = i;
        ll nd = n-now;
        if(n%5==0)
        {
            cout<<0<<" "<<n/5<<" "<<0<<endl;
            return;
        }
        if(nd%3==0)
        {
            cout<<nd/3<<" "<<i/5<<" "<<0<<endl;
            return;
        }
        if(nd%7==0)
        {
            cout<<0<<" "<<i/5<<" "<<nd/7<<endl;
            return;
        }
    }

    for(ll i=7; i<=n; i+=7)
    {
        ll now = i;
        ll nd = n-now;
        if(n%7==0)
        {
            cout<<0<<" "<<0<<" "<<n/7<<endl;
            return;
        }
        if(nd%3==0)
        {
            cout<<nd/3<<" "<<0<<" "<<i/7<<endl;
            return;
        }
        if(nd%5==0)
        {
            cout<<0<<" "<<nd/5<<" "<<i/7<<endl;
            return;
        }
        if(nd%8==0)
        {
            cout<<nd/8<<" "<<nd/8<<" "<<i/7<<endl;
            return;
        }

    }

    cout<<-1<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
