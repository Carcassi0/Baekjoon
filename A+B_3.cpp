#include <iostream>

using namespace std;

int main(){

    int count;
    int first;
    int second;
    int result[100];
    
    cin >> count;

    for(int i = 0; i<count; i++){
        cin >> first;
        cin >> second;
        result[i+1] = first+second;
    }

    for(int i = 0; i<count; i++){
        cout << result[i+1] << endl;
    }
    
    return 0;
}