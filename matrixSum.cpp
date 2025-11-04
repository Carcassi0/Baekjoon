#include <iostream>
#include <vector>

using namespace std;


int main(){

    int N,M;

    cin >> N >> M;

    vector<vector<int>> matrix(N,vector<int>(M,0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int temp;
            cin >> temp;
            matrix[i][j] = temp;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int temp;
            cin >> temp;
            matrix[i][j] += temp;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    

    return 0;
}