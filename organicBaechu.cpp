#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<int> graph[], vector<int> &visited, int &count)
{
    visited[node] = 1;
    for (int neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            count++;
            dfs(neighbor, graph, visited, count);
        }
    }
}

int main()
{

    int testCase;
    int temp;
    int count = 0;
    int m, n;
    int k;
    int x, y;
    bool flag = false;

    vector<int> answer;

    for (int i = 0; i < testCase; i++)
    {
        cin >> m >> n >> k;
        vector<vector<int>> map(m, vector<int>(n, 0));
        vector<vector<int>> visitedMap(m, vector<int>(n, 0));
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            map[x][y] = 1;
        }

        for (int i = 0; i < map.size(); i++)
        {
            for (int j = 0; j < map[i].size(); j++)
            {
                if(map[i][j]==1){

                }
            }
            
        }

        answer.push_back(temp);
    }

    return 0;
}