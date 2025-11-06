#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E, START;

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
    
    stack<int> stack; // 앞으로 가야할 곳 저장
    vector<int> visited(V+1, 0); // 이미 들린 곳의 순서 저장

    int count = 0;
    stack.push(START);
    
    
    while(!stack.empty()){
        int cur = stack.top();
        stack.pop();

        if(visited[cur]!=0) continue;
        visited[cur] = ++count;

        for (int next : table[cur])
        {
            if(visited[next]==0){
                stack.push(next);
            }
        }
    }

    for (int i = 1; i <= V; i++)
    {
        cout << visited[i] << '\n';
    }
    return 0;
}