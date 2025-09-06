#include <iostream>

using namespace std;

int main(){

    int total;
    int floor;
    int room;
    int num;

    cin >> total;

    for(int i = 0; i<total; i++){
        int calculatedFloor = 0;
        int calculatedNum = 0;
        cin >> floor >> room >> num;
        if(floor==1){
            calculatedFloor = 1;
        } else {
            calculatedFloor = num%floor;
            if(calculatedFloor == 0){
                calculatedFloor = floor;
            }
        }
        if(room == 1 && num/floor <=1 ){
            calculatedNum = 1;
        } else {
            if(num%floor == 0){
                calculatedNum = (num/floor);
            } else {
                calculatedNum = (num/floor) + 1;
            }
            
        }

        if(calculatedNum < 10){
            cout << calculatedFloor << 0 << calculatedNum << endl;
        } else {
           cout << calculatedFloor << calculatedNum << endl; 
        }
    }
    return 0;
}