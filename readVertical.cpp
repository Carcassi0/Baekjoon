#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<vector<char>> board(5, vector<char>(15, 0));

    for (int i = 0; i < 5; i++)
    {
        string temp;
        getline(cin, temp);
        for (int j = 0; j < temp.size(); j++)
        {
            board[i][j] = temp[j];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(board[j][i]){
                cout << board[j][i];
            }
        }
    }

    cout << endl;
    
    
    
    
    return 0;
}


