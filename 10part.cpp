#include <iostream>

using namespace std;

int main(){

    int date;
    int carNum;
    int result = 0;
    
    cin >> date;
    for(int i = 0; i<5; i++){
        cin >> carNum;
        if(carNum == date){
            ++result;
        }
    }

    cout << result << endl;
    return 0;
}