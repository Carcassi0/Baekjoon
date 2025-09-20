#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; // 정점
    int M; // 간선
    int count = 0;
    bool init = false;
    
    cin >> N >> M;

    vector<vector<int>> adjList(N+1);

    for (int i = 0; i < M; i++)
    {
        int a,b;
        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    
    vector<bool> visited(N+1, false);

    for (int i = 1; i <= N; i++)
    {
        if(!visited[i]){
            ++count;
            stack<int> stack;
            stack.push(i);
             while(!stack.empty()){
        
                int cur = stack.top();
                stack.pop();
                if(visited[cur]) continue;

                visited[cur] = true;

                for (int next : adjList[cur])
                {
                    if(!visited[next]){
                        stack.push(next);
                    }
                }
            }
        }
    }
    

    cout << count << endl;
    
    
    return 0;
}