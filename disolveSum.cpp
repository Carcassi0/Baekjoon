#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int target;
    

    cin >> target;

    int number = target/2;

    while(1){
        int operNum = number; 
        int disolveSum = 0;
        disolveSum += operNum;
        while(operNum != 0){
            disolveSum += operNum%10; 
            operNum /= 10;
        }
        if(disolveSum == target){
            cout << number << endl;
            break;
        }
        if(number ==  target){
            cout << 0 << endl;
            break;
        }
        ++number;

    }

    return 0;
}