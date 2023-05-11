#include <iostream>
#include <unordered_map>
#include <vector>
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define tc       \
    long long t; \
    cin >> t;    \
    while (t--)
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) n && !(n & (n - 1))

using namespace std;

unordered_map<int, int> visited;
unordered_map<int, vector<int>> graph;

// check if undirected graph is cyclic or acyclic
bool isCyclic(int node, int p)
{
    visited[node] = true;

    for (auto neighbour : graph[node])
    {
        if (visited[neighbour] && neighbour != p)
        {
            return true;
        }
        else if (!visited[neighbour])
        {
            if (isCyclic(neighbour, node))
            {
                return true;
            }
        }
    }

    return false;
}

// check if directed graph is cyclic or acyclic
int const VISITED = 2, PROGRESS = 1, NOT_VISITED = 0;
bool isCyclic(int node)
{

    visited[node] = PROGRESS;

    for (auto neighbour : graph[node])
    {
        if (visited[neighbour] == NOT_VISITED)
        {
            if (isCyclic(neighbour))
                return true;
        }
        else if (visited[neighbour] == PROGRESS)
        {
            return true;
        }
    }

    visited[node] = VISITED;

    return false;
}

// DFS Algorithm implementation recursive
void DFS(int node)
{
    visited[node] = true;

    for (auto neighbour : graph[node])
    {
        if (!visited[neighbour])
        {
            DFS(neighbour);
        }
    }

    cout << node << " ";
}

void solve()
{
    int n, m, u, v, node;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }

    for (auto it : graph)
    {
        if (!visited[it.first])
        {
            DFS(it.first);
        }
    }

    // 2 4 3 1 5 0
}

int main()
{
    speed;
    solve();
    return 0;
}