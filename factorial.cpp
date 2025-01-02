#include <iostream>

using namespace std;

int main(){

    int n;
    

    cin >> n;
    int temp = n;

    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    for(int i = 1; i<n+1; i++){
        if(n-i > 0){
            temp *= (n-i);
        }
        
    }
    cout << temp << endl;
    return 0;
}