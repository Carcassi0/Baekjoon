#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int xVector[] = {0, 0, -1, 1};
int yVector[] = {1, -1, 0, 0};

void BFS(int x, int y, int m, int n, vector<vector<int>> &map, vector<vector<int>> &visitedMap)
{
    queue<pair<int,int>> q;
    q.push({x,y});
    visitedMap[y][x] = 1;

    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cx + xVector[i];
            int ny = cy + yVector[i];

            if(nx>=0 && nx<m && ny>=0 && ny<n && !visitedMap[ny][nx] && map[ny][nx]){
                visitedMap[ny][nx] = 1;
                q.push({nx,ny});
            }
        }
        
    }
    
}

int main()
{

    int t, m, n, k;

    cin >> t; // test case

    for (int i = 0; i < t; i++)
    {

        cin >> m >> n >> k; // x, y축

        int count = 0;

        vector<vector<int>> map(n, vector<int>(m, 0));
        vector<vector<int>> visitedMap(n, vector<int>(m, 0));

        for (int i = 0; i < k; i++) // 배추 위치 입력
        {
            int x,y;
            cin >> x >> y;
            map[y][x] = 1;
        }

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (map[y][x] == 1 && !visitedMap[y][x])
                {
                    BFS(x, y, m, n, map, visitedMap);
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}