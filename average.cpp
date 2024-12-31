#include <iostream>

using namespace std;



int main(){

    int count;
    double point = 0;
    double maxPoint = 0;
    double sum = 0;
    double average = 0;

    cin >> count;

    for(int i = 0; i<count; i++){
        cin >> point;
        if(point>maxPoint){
            sum += maxPoint;
            maxPoint = point;
            continue;
        }else{
            sum += point;
        }
    }

    average = (((sum+maxPoint)/maxPoint)/count)*100;

    cout << average << endl;

    return 0;
}