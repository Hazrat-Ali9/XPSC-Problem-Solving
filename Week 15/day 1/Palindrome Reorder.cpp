/*
*/
///PROBLEM LINK -> https://cses.fi/problemset/task/1755/
#include <bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using  pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
#define ld double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<endl
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const double PI =  3.1415926535897932384626433832795;
//.......global.........
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
bool is_prime(ll n)
{
    if (n == 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (ll i = 3; i * i <= n; i++)if (n % i == 0)return false;
    return true;
}
vector<int>fre(26,0);
void TEST_CASES()
{
    string s;
    cin>>s;
    ll n=s.size();
    for(ll i=0; i<s.size(); i++)fre[s[i]-'A']++;
    ll odd =0;
    ll ind=-1;
    debug(fre)
    for(int i=0; i<26; i++)
    {
        if(fre[i]%2==1)
        {
            odd++;
            ind=i;
        }
    }
    if(odd>1)cout<< "NO SOLUTION\n";
    else
    {
        string s1="";
        for(ll i=0; i<26; i++)for(ll j=1; j<=fre[i]/2; j++)s1.push_back('A'+i);
        cout<<s1;
        char c = 'A'+ind;
        if(ind!=-1)cout<<c;
        for(ll j=s1.size()-1; j>=0; j--)cout<<s1[j];
        cout<<endl;
    }
    debug(odd,ind,fre[ind])
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    // cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
