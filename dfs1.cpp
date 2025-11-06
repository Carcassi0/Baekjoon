#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, R;

    cin >> N >> M >> R;

    vector<vector<int>> table(N+1);

    for (int i = 0; i < M; i++)
    {
        int from,to;
        cin >> from >> to;
        table[from].push_back(to);
        table[to].push_back(from);
    }

    for(int i =1; i<= N; i++){
        sort(table[i].begin(), table[i].end(), greater<int>());
    }

    stack<int> stack;
    vector<int> visited(N+1, 0);
    int trailCount = 0;

    stack.push(R);

    while(!stack.empty()){
        int cur = stack.top();
        stack.pop();

        if (visited[cur]) continue;

        visited[cur] = ++trailCount;

        for (int next : table[cur])
        {
            if(!visited[next]){
                stack.push(next);
            }
        }

    }

    for (int i = 1; i<visited.size(); i++)
    {
        cout << visited[i] << '\n';
    }

    return 0;
    
}   