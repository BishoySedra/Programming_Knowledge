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
#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

unordered_map<int, int> visited;
unordered_map<int, vector<int>> graph;
bool isCyclic = false;

void DFS(int source_node, int parent)
{
    visited[source_node] = true;

    for (auto child : graph[source_node])
    {
        if (!visited[child])
        {
            DFS(child, source_node);
        }
        else if (child != parent)
        {
            isCyclic = true;
            return;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    int start;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        start = u;
    }

    DFS(start, -1);

    if (isCyclic)
    {
        cout << "Cyclic" << el;
        return;
    }

    cout << "Acyclic" << el;
}

int main()
{
    file;
    speed;
    solve();
    return 0;
}