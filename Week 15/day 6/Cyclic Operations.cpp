/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1867/problem/D
#include <bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using  pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
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
void dfs1(int sourc,vector<bool>&visited1,stack<int>&s,vector<vector<int>>&ad1)
{
    visited1[sourc]=true;
    for(auto i:ad1[sourc])if(!visited1[i])dfs1(i,visited1,s,ad1);
    s.push(sourc);
}
void dfs2(int sourc,vector<bool>&visited2,vector<vector<int>>&ad2,int &sz)
{
    sz++;
    visited2[sourc]=true;
    for(auto i:ad2[sourc])if(!visited2[i])dfs2(i,visited2,ad2,sz);
}
vector<int> kosaraju(int sourc,int n,vector<bool>&visited1,vector<bool>&visited2,vector<vector<int>>&ad1,vector<vector<int>>&ad2,stack<int>&s)
{
    vector<int>ans;
    for(int i=1; i<=n; i++)if(!visited1[i])dfs1(i,visited1,s,ad1);
    while(s.size())
    {
        int now = s.top();
        s.pop();
        if (!visited2[now])
        {
            int right_now_compo_size=0;
            dfs2(now,visited2,ad2,right_now_compo_size);
            if(right_now_compo_size>1)ans.push_back(right_now_compo_size);
            else for(auto i:ad1[now])if(i==now)
                    {
                        ans.push_back(1);
                        break;
                    }
        }
    }
    return ans;
}
void TEST_CASES()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>>ad1(n+1);
    vector<vector<int>>ad2(n+1);
    stack<int>s;
    vector<bool>visited1(n+1,false);
    vector<bool>visited2(n+1,false);
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        int v;
        cin>>v;
        ad1[i].push_back(v);
        ad2[v].push_back(i);
        arr[i]=v;

    }
    if(k==1)
    {
        for(int i=1; i<=n; i++)
        {
            if(arr[i]!=i)
            {
                no;
                return;
            }
        }
    }
    int sr = 1;
    vector<int> ans =   kosaraju (sr,n,visited1,visited2,ad1,ad2,s);
    for(auto i:ans)
    {
        if(i!=k)
        {
            no;
            return;
        }
    }
    yes;
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
