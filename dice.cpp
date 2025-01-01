#include <iostream>

using namespace std;

int main(){

    int testCount;
    int a;
    int b;
    int list[10000];

    cin >> testCount;

    for(int i = 0; i<testCount; i++){
        cin >> a;
        cin >> b;
        list[i+1] = a+b;
    }

    for(int i = 0; i<testCount; i++){
        cout << "Case "<< i+1 << ": ";
        cout << list[i+1] << endl;
    }

    return 0;
}