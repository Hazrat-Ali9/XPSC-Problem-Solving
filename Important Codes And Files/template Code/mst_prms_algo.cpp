#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5+5;
const int INF = 1e9+7;
vector<pair<int,int>> graph[MAX_N];
int n,m;
int primMST(int src)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(n+1, INF);
    vector<bool> inMST(n+1, false);
    vector<int> parent(n+1, -1);
    dist[src] = 0;
    pq.push({0, src});
    int mstCost = 0;
    while(pq.size())
    {
        int u = pq.top().second;
        pq.pop();
        if(inMST[u]) continue;
        inMST[u] = true;
        mstCost += dist[u];
        for(auto x : graph[u])
        {
            int v = x.first;
            int weight = x.second;
            if(!inMST[v] && dist[v] > weight)
            {
                dist[v] = weight;
                pq.push({dist[v], v});
                parent[v] = u;
            }
        }
    }
    return mstCost;
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i<m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    int src = 1;
    cout << primMST(src) << "\n";
    return 0;
}
