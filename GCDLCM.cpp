#include <iostream>

using namespace std;

int GCD(int first, int second){
    if(second == 0){
        return first;
    }
    return GCD(second, first%second);
}

int LCM(int first, int second){
    return (first*second)/GCD(first, second);
}

int main(){

    int first, second;

    cin >> first;
    cin >> second;


    cout << GCD(first, second) << endl;
    cout << LCM(first, second) << endl;

    return 0;
}

