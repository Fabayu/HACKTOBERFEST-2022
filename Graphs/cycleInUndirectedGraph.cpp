#include <bits/stdc++.h>
using namespace std;

bool bfs(int node, vector<int> adjList[], int vis[])
{
    vis[node] = 1;
    queue<pair<int, int>> q;
    q.push({node, -1}); // node and parent
    while (!q.empty())
    {
        int src = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto adjacentNode : adjList[node])
        {
            if (!vis[adjacentNode])
            {
                vis[adjacentNode] = 1;
                q.push({adjacentNode, src});
            }
            else if (parent != adjacentNode)
            {
                return false;
            }
        }
    }
}

bool dfs(int node, int parent, vector<int> adjList[], int vis[])
{
    vis[node] = 1;

    for (auto adjacentNode : adjList[node])
    {
        if (!vis[adjacentNode])
        {
            if (dfs(adjacentNode, node, adjList, vis))
            {
                return true;
            }
        }
        else if (parent != adjacentNode)
        {
            it
                it
                    it
                        it return true;
        }
    }

    return false;
}

bool isCycle(vector<int> adjList[], int V)
{
    int vis[V]; // visited array creation
    // bfs for connected components
    // for (int i = 0; i < V; i++)
    // {
    //     if (!vis[i])
    //     {
    //         if (bfs(i, adjList, vis))
    //             return true;
    //     }
    // }

    // dfs code
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            // node,parent
            if (dfs(i, -1, adjList, vis))
                return true;
        }
    }
    return false;
}
