/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1051/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
void TEST_CASES()
{
    ll l,r;
    cin>>l>>r;
    yes;
    for(ll i=l; i<=r; i+=2)cout<<i<<" "<<i+1<<endl;
    return;
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
