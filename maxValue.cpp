#include <iostream>
#include <vector>

using namespace std;

int main(){

    int max = 0;
    int row = 0;
    int col = 0;

    for (int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++){
            int temp;
            cin >> temp;
            if(temp > max){
                max = temp;
                row = i;
                col = j;
            }
        }
    }

    cout << max << endl;
    cout << row+1 << " " << col+1 << endl;
    

    return 0;
}