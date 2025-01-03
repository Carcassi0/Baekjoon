#include <iostream>

using namespace std;

int main(){

    int max = 0;
    int temp = 0;
    int flag = 0;
    int count = 0;
    int position = 0;
    for(int i = 0; i<9; i++){
        cin >> temp;
        if(flag==0){
            max = temp;
            flag = 1;
            ++count;
            position = count;
            continue;
        }
        if(temp > max){
            max = temp;
            ++count;
            position = count;
            continue;
        }
        ++count;
    }

    cout << max << endl << position << endl;
    return 0;
}