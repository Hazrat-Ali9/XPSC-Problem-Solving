/*
ashik aslam
*/

///PROBLEM LINK ->  https://codeforces.com/contest/1851/problem/D

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
    vector<ll>ar(n-1);
    for(auto &i:ar)cin>>i;
    ll fre[n+1]= {0};
    ll total = n*(n+1)/2ll;
    if(ar.back()>total)
    {
        no;
        return;
    }


    if(ar.back()!=total)
    {
        ar.push_back(total);
        for(ll i=0; i<ar.size(); i++)
        {
            ll def;
            if(i==0)def=ar[i];
            else def=ar[i]-ar[i-1];
            if(def>n || def<=0)
            {
                no;
                return;
            }
            else fre[def]++;

        }


        for(ll i=1; i<=n; i++)
        {
            if(fre[i]!=1)
            {
                no;
                return;
            }
        }
        yes;
        return;
    }



    //////////////////////////////////// if last element is not == n(n+1)/2
    vector<ll>fn;
    vector<ll>de;
    for(ll i=0; i<ar.size(); i++)
    {
        ll def;
        if(i==0)def=ar[i];
        else  def=ar[i]-ar[i-1];
        if(def<=0 || def>total)
        {
            no;
            return;
        }
        if(def>n)de.push_back(def);
        else if(def<=n && fre[def]==1)de.push_back(def);
        else fre[def]++;
    }
    if(ar[0]==1)fre[1]++;
    for(ll i=1; i<=n; i++)if(fre[i]==0)fn.push_back(i);
    if(de.size()==0)de.push_back(ar[0]);
    if(de.size()!=1 || fn.size()!=2)
    {
        no;
        return;
    }
    if(fn[0]+fn[1]!=de.back())
    {
        no;
        return;
    }
    yes;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
