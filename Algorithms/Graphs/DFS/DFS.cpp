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

unordered_map<int, int> colors;
unordered_map<int, int> parent;
unordered_map<int, int> discovery_time;
unordered_map<int, int> finish_time;
unordered_map<int, vector<int>> graph;

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

void DFS_Visit(int start_node, int &time)
{
    colors[start_node] = GRAY;
    time += 1;
    discovery_time[start_node] = time;

    for (auto child : graph[start_node])
    {
        if (colors[child] == WHITE)
        {
            parent[child] = start_node;
            DFS_Visit(child, time);
        }
    }

    cout << start_node << " ";

    colors[start_node] = BLACK;
    time += 1;
    finish_time[start_node] = time;
}

void DFS(int source_node)
{
    // Call DFS_Visit for each node
    int time = 0;
    for (auto it : graph)
    {
        if (colors[it.first] == WHITE)
        {
            DFS_Visit(it.first, time);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    DFS(1);

    cout << el;

    for (auto it : discovery_time)
    {
        cout << it.first << " " << it.second << " " << finish_time[it.first] << el;
    }
}

int main()
{
    file;
    speed;
    solve();
    return 0;
}
