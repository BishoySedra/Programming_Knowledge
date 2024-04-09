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

// Dijekstra's Algorithm
// It is used to find the shortest path from a source node to all other nodes in a graph.
// It is a greedy algorithm.
// It is used to find the shortest path in a weighted graph.
// It is used to find the shortest path in a directed or undirected graph.
// It is used to find the shortest path in a graph with positive or negative edge weights.
// It is used to find the shortest path in a graph with no negative cycles.

// Steps:
// 1. Create a priority queue to hold the vertices of the graph.
// 2. Create a vector to hold the distance of each vertex from the source vertex.
// 3. Initialize the distance of the source vertex to 0 and the distance of all other vertices to infinity.
// 4. Insert the source vertex into the priority queue.
// 5. While the priority queue is not empty, do the following:
//    a. Extract the vertex with the minimum distance from the priority queue.
//    b. For each neighbor of the extracted vertex, do the following:
//       i. Calculate the distance of the neighbor from the source vertex as the sum of the distance of the extracted vertex from the source vertex and the weight of the edge between the extracted vertex and the neighbor.
//       ii. If the calculated distance is less than the current distance of the neighbor from the source vertex, update the distance of the neighbor from the source vertex and insert the neighbor into the priority queue.
// 6. The distance vector now contains the shortest distance of each vertex from the source vertex.

// Time Complexity: O((V + E) * log(V))

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
}

int main()
{
    file;
    speed;
    solve();
    return 0;
}