#include <iostream>

using namespace std;

int main(){

    int total = 0;
    int in;
    int out;
    int maximum = 0;
    for(int i = 0; i<4; i++){
        cin >> out >> in;
        total += in - out;
        if(maximum < total){
            maximum = total;
        }
    }
    cout << maximum << endl;
    return 0;
}