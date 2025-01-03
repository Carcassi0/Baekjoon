#include <iostream>

using namespace std;

int main(){
    
    int count;
    int result = 0;
    cin >> count;

    for(int i = 1; i<count+1; i++){ 
    result += i;
        for(int j = 1; j<=i; j++){
            result += j+i;
        }
    }

    cout << result << endl;

    return 0;
}