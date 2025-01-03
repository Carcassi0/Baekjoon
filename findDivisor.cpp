#include <iostream>

using namespace std;

bool isDivisor(int num, int target){
    
    if(target%num==0){
        return true;
    }
    return false;
}

int main(){
    int a;
    int b;
    int count = 0;

    cin >> a >> b;

    for(int i = 1; i<a+1; i++){
        if(isDivisor(i,a)){
            ++count;
        };
        if(count == b){
            cout << i << endl;
            return 0;
        }
    }

    if(count < b){
        cout << 0 << endl;
    }
    
    return 0;
}