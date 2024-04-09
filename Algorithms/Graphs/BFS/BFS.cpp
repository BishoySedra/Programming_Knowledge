#include <iostream>
#include <map>
#include <vector>
#include <queue>

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

const int N = 1e5 + 5;
map<int, bool> visited;
map<int, vector<int>> graph;
map<pair<int, int>, int> weights;
vector<int> path(N, -1);
vector<int> parent(N, -1);

void BFS(int source_node)
{
    // initialize the queue consists of ready nodes
    queue<int> ready_nodes;

    // initialize the path of the source node
    path[source_node] = 0;

    // check if the current node isn't visited yet
    ready_nodes.push(source_node);

    // iterating through the adjacency nodes for each node level by level.
    while (!ready_nodes.empty())
    {
        int curr_node = ready_nodes.front();
        ready_nodes.pop();

        // if (!visited[curr_node])
        // {
        // cout << curr_node << " ";
        visited[curr_node] = true;
        // }

        for (auto child : graph[curr_node])
        {
            if (!visited[child])
            {
                ready_nodes.push(child);
                visited[child] = true;
                // path[child] = path[curr_node] + weights[{curr_node, child}];
                path[child] = path[curr_node] + 1;
                parent[child] = curr_node;
            }
        }
    }
}

void solve()
{
    int entry, n, e, node1, node2, weight;
    cin >> n >> e >> entry;

    for (int i = 0; i < e; i++)
    {
        cin >> node1 >> node2 >> weight;
        // for (int j = 0; j < weight - 1; j++)
        // {
        //     int intermediateNode = node1 + j + 1; // Create intermediate nodes
        //     graph[node1].push_back(intermediateNode);
        //     graph[intermediateNode].push_back(node1);
        //     graph[intermediateNode].push_back(node2);
        //     graph[node2].push_back(intermediateNode);
        //     node1 = intermediateNode; // Update node1 for the next iteration
        // }
        graph[node1].push_back(node2); // Add the final edge after intermediate nodes
        graph[node2].push_back(node1); // Add the final edge after intermediate nodes
    }

    cout << "Graph: " << el;
    for (auto it : graph)
    {
        cout << "Node: " << it.first << " -> ";
        for (auto child : it.second)
        {
            cout << child << " ";
        }
        cout << el;
    }

    // cout << "BFS Traversal: ";
    BFS(entry);

    cout << el << "=========================" << el;

    int desired_target = 2;
    int sum_of_path = 0;
    while (parent[desired_target] != -1)
    {
        cout << desired_target << " <- ";
        desired_target = parent[desired_target];
        sum_of_path += path[desired_target];
    }
    cout << desired_target << el;

    // cout << "Sum of path: " << sum_of_path << el;

    cout << "\n=========================" << el;

    cout << "Parent: " << el;

    for (auto it : graph)
    {
        cout << "Parent of " << it.first << " is: " << parent[it.first] << el;
    }
}

int main()
{
    file;
    speed;
    solve();
    return 0;
}