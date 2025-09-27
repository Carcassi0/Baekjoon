#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

vector<int> dc = {0, 1, 0, -1};
vector<int> dr = {1, 0, -1, 0};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; 

    cin >> n >> m;

    vector<vector<pair<int,bool>>>table(n);
    queue<pair<int,int>>que;

    // 초기화
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            table[i].push_back({temp, false});
            if(temp == 2){
               que.push({i,j});
               table[i][j].first = 0;
               table[i][j].second = true;
            }
        }
    }

    while(!que.empty()){
        pair<int,int> cur = que.front();
        que.pop();
        int Y = cur.first;
        int X = cur.second;
        

        for(int i = 0; i<4; i++){
            int newX = X + dc[i];
            int newY = Y + dr[i];

            if(newX < 0 || newY < 0 || newX >= m || newY >= n) continue;
            if(table[newY][newX].second == true || table[newY][newX].first==0) continue;

            que.push({newY, newX});
            table[newY][newX].second = true;
            table[newY][newX].first = table[Y][X].first + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            if (table[i][j].first == 0) cout << 0;       
            else if (!table[i][j].second) cout << -1; 
            else cout << table[i][j].first;        
            if(j!=m-1){
                cout << ' ';
            }
        }
        cout << '\n';
    }
    





    
    return 0;
}