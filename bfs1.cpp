#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V,E,START;

    cin >> V >> E >> START;

    vector<vector<int>> table(V+1);

    for (int i = 0; i < E; i++)
    {
        int from, to;

        cin >> from >> to;

        table[from].push_back(to);
        table[to].push_back(from);
    }

    for (int i = 1; i <= V; i++)
    {
        sort(table[i].begin(), table[i].end());
    }

    queue<int> queue;
    vector<int> visited(V+1, 0);
    int count = 0;

    queue.push(START);

    while(!queue.empty()){
        int cur = queue.front();
        queue.pop();

        if(visited[cur] != 0) continue;

        visited[cur] = ++count;

        for (int next : table[cur])
        {
            if(visited[next] == 0){
                queue.push(next);
            }
        }

    }

    for (int i = 1; i <= V; i++)
    {
        cout << visited[i] << '\n';
    }
    
    
    
    return 0;
}