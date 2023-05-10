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

unordered_map<int, bool> visited;
unordered_map<int, vector<int>> graph;

void DFS(int node)
{
    if (visited[node])
    {
        return;
    }

    // cout << node << " ";

    visited[node] = true;

    for (auto neighbour : graph[node])
    {
        DFS(neighbour);
    }
}

void solve()
{
    int n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cnt = 0;
    for (auto it : graph)
    {
        if (!visited[it.first])
        {
            cnt++;
            DFS(it.first);
        }
    }

    cout << ((cnt == 1 && m == n - 1) ? "YES" : "NO");
}

int main()
{
    speed;
    solve();
    return 0;
}