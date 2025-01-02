#include <iostream>

using namespace std;

int main(){

    int t;
    int v;
    int e;
    int list[100];

    cin >> t;

    for(int i = 0; i<t; i++){
        cin >> v;
        cin >> e;
        list[i+1] = 2 + e - v;
    }
    for(int i = 0; i<t; i++){
        cout << list[i+1] << endl;
    }
    

    return 0;
}