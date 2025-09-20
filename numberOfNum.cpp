#include <iostream>
#include <string>

using namespace std;

int main(){

    int a,b,c;
    string target;
    int temp[10];

    for(int i = 0; i<10; i++){
        temp[i] = 0;
    }
    
    cin >> a >> b >> c;

    target = to_string(a * b * c);

    for(int i = 0; i < target.length(); i++){
        int num = target[i] - '0';
        temp[num] += 1;
    }

    for(int i = 0; i<10; i++){
        cout << temp[i] << endl;
    }


    return 0;
}