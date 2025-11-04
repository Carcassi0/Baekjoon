#include <iostream>
#include <vector>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> matrix(100, vector<int>(100, 0));
    int count;
    int size = 0;

    cin >> count;


    for (int i = 0; i < count; i++)
    {
        int a,b;

        cin >> a >> b;

        for(int j = b; j< b+10; j++){
            for(int k = a; k < a+10; k++){
                matrix[j][k]+=1;
            }
        }
    }


    for (int i = 0; i < 100; i++)
    {
       for(int j = 0; j < 100; j++){
        if(matrix[i][j]>0){
            ++size;
        }
       }
    }

    cout << size << endl;
    
    
    return 0;
}