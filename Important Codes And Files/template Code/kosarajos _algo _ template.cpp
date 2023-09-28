#include <bits/stdc++.h>
using namespace std;
void dfs1(int sourc,vector<bool>&visited1,stack<int>&s,vector<vector<int>>&ad1)
{
    visited1[sourc]=true;
    for(auto i:ad1[sourc])if(!visited1[i])dfs1(i,visited1,s,ad1);
    s.push(sourc);
}
void dfs2(int sourc,vector<bool>&visited2,vector<vector<int>>&ad2)
{
    cout<<sourc<<" ";
    visited2[sourc]=true;
    for(auto i:ad2[sourc])if(!visited2[i])dfs2(i,visited2,ad2);
}
void kosaraju(int sourc,int n,vector<bool>&visited1,vector<bool>&visited2,vector<vector<int>>&ad1,vector<vector<int>>&ad2,stack<int>&s)
{
    for(int i=1; i<=n; i++)if(!visited1[i])dfs1(i,visited1,s,ad1);
    while(s.size())
    {
        int now = s.top();
        s.pop();
        if (!visited2[now])
        {
            cout << "Strongly Connected Component: ";
            dfs2(now,visited2,ad2);
            cout << endl;
        }
    }
}
void TEST_CASES()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ad1(n+1);
    vector<vector<int>>ad2(n+1);
    stack<int>s;
    vector<bool>visited1(n+1,false);
    vector<bool>visited2(n+1,false);
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        ad1[u].push_back(v);
        ad2[v].push_back(u);

    }
    int sr = 1;
    cout << "Strongly Connected Components in the graph:" << endl;
    kosaraju (sr,n,visited1,visited2,ad1,ad2,s);
}
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
