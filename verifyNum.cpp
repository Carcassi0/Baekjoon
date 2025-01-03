#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int verify = 0;

    for(int i = 0; i<5; i++){
        cin >> num;
        verify += num*num;
    }
    cout << verify%10 << endl;
    
    return 0;
}