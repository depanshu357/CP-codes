#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#include <bits/stdc++.h>
using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{

    // No. of vertices
    int V;

    // Pointer to an array containing adjacency lists
    vector<list<int>> adj;

public:
    // Constructor
    Graph(int V);

    // Function to add an edge to graph
    void addEdge(int v, int w);

    // Prints BFS traversal from a given source s
    void BFS(int s, vector<vector<pair<int, int>>> ve,map<pair<int,int>,int> mp);
};

Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
    // Add w to v’s list.
    adj[v].push_back(w);
}

void Graph::BFS(int s, vector<vector<pair<int, int>>> ve,map<pair<int,int>,int> mp)
{
    // Mark all the vertices as not visited
    vector<bool> visited;
    visited.resize(V, false);

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    for (int i = 0; i < ve[s].size(); i++)
    {
        visited[s] = true;
        queue.push_back(s);
    }

    while (!queue.empty())
    {

        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjacent : adj[s])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                if(mp[{s,adjacent}] < ) cout<<"K"; 
                queue.push_back(adjacent);
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> ve(n + 1);
    map<pair<int,int>,int> mp;
    Graph g(n + 1);
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        ve[u - 1].push_back({v - 1, i});
        g.addEdge(u - 1, v - 1);
        mp[{u-1,v-1}] = i;
    }

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(0, ve,mp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}