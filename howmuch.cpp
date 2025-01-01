#include <iostream>

using namespace std;

int main(){

    int testCount;
    int carPrice;
    int option;
    int optionCount;
    int optionPrice;
    int total=0;
    int list[1000];

    cin >> testCount;
    for(int i = 0; i<testCount; i++){
        cin >> carPrice;
        cin >> option;
        for(int j = 0; j<option; j++){
            cin >> optionCount;
            cin >> optionPrice;
            total += optionCount*optionPrice;
        }
        list[i+1] = total+carPrice;
        total = 0;
    }

    for(int i = 0; i<testCount; i++){
        cout << list[i+1] << endl;
    }
    return 0;
}