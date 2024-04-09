#include <iostream>
#include <unordered_map>
#include <map>
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

unordered_map<int, bool> visited;

// distance, weight
// vector<int> arr;
// map<int, bool> valid;
map<int, vector<int>> graph;
map<pair<int, int>, int> weights;
// vector<int> result;
int start_1 = 10;
int target_1 = 2;

int start_2 = 12;
int target_2 = 4;

int answer = INT_MAX;
void DFS(int node, int distance)
{
    if (node == target_2)
    {
        answer = min(answer, distance);
    }

    // visited[node] = true;

    for (auto child : graph[node])
    {
        // if (!visited[child])
        // {
        DFS(child, distance + weights[{node, child}]);
        // }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        // construct the graph where each node has a list of its children that smaller than its parent
        if (u > v)
        {
            graph[u].push_back(v);
            weights[{u, v}] = w;
        }
        else
        {
            graph[v].push_back(u);
            weights[{v, u}] = w;
        }
    }

    // printing the graph
    for (auto i : graph)
    {
        cout << i.first << " -> ";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << el;
    }

    DFS(start_2, 0);

    cout << "the min distance is " << answer << el;
    // // int source = 12;
    // int target = 4;

    // DFS(target, -1, 0);

    // cout << answer << el;
}

int main()
{
    file;
    speed;
    solve();
    return 0;
}
