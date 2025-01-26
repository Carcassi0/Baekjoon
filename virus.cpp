#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> graph[], vector<bool>& visited, int& count) {
    visited[node] = true; 
    for (int neighbor : graph[node]) { 
        if (!visited[neighbor]) { 
            count++; 
            dfs(neighbor, graph, visited, count); 
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> graph[n + 1]; 
    vector<bool> visited(n + 1, false); 
    int count = 0; 


    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }


    dfs(1, graph, visited, count);

   
    cout << count << endl;

    return 0;
}