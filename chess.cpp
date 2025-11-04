#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<int> array;
    for(int i = 0; i<6; i++){
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    array[0] = array[0]-1;
    array[1] = array[1]-1;
    array[2] = array[2]-2;
    array[3] = array[3]-2;
    array[4] = array[4]-2;
    array[5] = array[5]-8;

    for(int i = 0; i<6; i++){
        if(array[i] == 0){
            cout << 0 << " ";
            continue;
        }
        if(array[i] > 0){
            cout << -1*array[i] << " ";
            continue;
        }
        cout << -1*array[i] << " ";
    }
    cout << endl;

    return 0;
}