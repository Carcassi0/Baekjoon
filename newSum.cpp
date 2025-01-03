#include <iostream>

using namespace std;

int main(){

    int testCount;
    int count;
    int num;
    int sum = 0;
    int result[11];

    cin >> testCount;
    
    for(int i = 0; i<testCount; i++){
        cin >> count;
        for(int j = 0; j<count; j++){
            cin >> num;
            sum += num;
        }
        result[i+1] = sum;
        sum = 0;
    }

    for(int i = 0; i<testCount; i++){
        cout << result[i+1] << endl;
    }



    return 0;
}