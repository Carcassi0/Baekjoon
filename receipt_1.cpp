#include <iostream>

using namespace std;


int main(){

    long long total;
    int num;
    int temp = 0;
    int quantity = 0;
    int result = 0;
    
    cin >> total;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> temp;
        cin >> quantity;
        result += temp*quantity;
    }

    if(result == total){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}