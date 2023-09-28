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
vector<int>ad1[100];
vector<int>ad2[100];
stack<int>s;
vector<bool>visited1(100);
vector<bool>visited2(100);
int n,m;
void dfs1(int sourc)
{
    visited1[sourc]=true;
    for(auto i:ad1[sourc])if(!visited1[i])dfs1(i);
    s.push(sourc);
}
void dfs2(int sourc)
{
    cout<<sourc<<" ";
    visited2[sourc]=true;
    for(auto i:ad2[sourc])if(!visited2[i])dfs2(i);
}
void kosaraju(int sourc)
{
    for(int i=1; i<=n; i++)if(!visited1[i])dfs1(i);
    while(s.size())
    {
        int now = s.top();
        s.pop();
        if (!visited2[now])
        {
            cout << "Strongly Connected Component: ";
            dfs2(now);
            cout << endl;
        }
    }
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        ad1[u].push_back(v);
        ad2[v].push_back(u);

    }
    cout << "Strongly Connected Components in the graph:" << endl;
    kosaraju(1);
    return 0;
}
