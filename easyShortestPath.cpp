#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main(){

    int n,m;

    cin >> n >> m;

    vector<vector<int>>adjList(n);
    vector<vector<int>>markList = adjList;

    // 초기화
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            adjList[i].push_back(temp);
            markList[i].push_back(0);
        }
    }
    



    return 0;
}