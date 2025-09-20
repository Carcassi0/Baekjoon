#include <iostream>

using namespace std;

int main(){

    int subAmount = 0;
    int current = 0;
    int next = 0;


    for(int i = 0; i<4; i++){
        cin >> current;
        cin >> next;
        subAmount += next - current;

    }


    if(subAmount == 4) {cout << "ascending" << endl; return 0;}
    else if(subAmount == -4) {cout << "descending" << endl; return 0;}
    else {cout << "mixed" << endl; return 0;}


    return 0;
}