#include <iostream>

using namespace std;

int main(){
    int sum;
    int add = 0;
    int temp;

    cin >> sum;

    for(int i = 0; i<9; i++){
        cin >> temp;
        add += temp;
        temp = 0;
    }

    cout << (sum - add) << endl;

    return 0;
}