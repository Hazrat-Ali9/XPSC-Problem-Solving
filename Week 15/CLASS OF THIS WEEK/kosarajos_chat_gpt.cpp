#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void dfs(int v, vector<vector<int>>& graph, vector<bool>& visited, stack<int>& s)
{
    visited[v] = true;
    for (int u : graph[v])
    {
        if (!visited[u])
        {
            dfs(u, graph, visited, s);
        }
    }
    s.push(v);
}

void dfsTranspose(int v, vector<vector<int>>& transposeGraph, vector<bool>& visited)
{
    visited[v] = true;
    cout << v << " ";

    for (int u : transposeGraph[v])
    {
        if (!visited[u])
        {
            dfsTranspose(u, transposeGraph, visited);
        }
    }
}

void kosaraju(int V, vector<vector<int>>& graph)
{
    vector<bool> visited(V, false);
    stack<int> s;

    // Step 1: Perform DFS and push nodes onto a stack in finishing order
    for (int i = 0; i < V; ++i)
    {
        if (!visited[i])
        {
            dfs(i, graph, visited, s);
        }
    }

    // Create the transpose of the graph
    vector<vector<int>> transposeGraph(V);
    for (int i = 0; i < V; ++i)
    {
        for (int u : graph[i])
        {
            transposeGraph[u].push_back(i);
        }
    }

    fill(visited.begin(), visited.end(), false);

    // Step 2: Process nodes from the stack in reverse order
    while (!s.empty())
    {
        int v = s.top();
        s.pop();
        if (!visited[v])
        {
            cout << "Strongly Connected Component: ";
            dfsTranspose(v, transposeGraph, visited);
            cout << endl;
        }
    }
}

int main()
{
    int V,E;
    cin>>V>>E;
    vector<vector<int>> graph(V+1);
    for(int i=1; i<=E; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    cout << "Strongly Connected Components in the graph:" << endl;
    kosaraju(V+1, graph);
    return 0;
}
