#include <iostream>


using namespace std;


int main(){

    int hour, minute;
    int converted = 0;
    cin >> hour;
    cin >> minute;

    converted = hour * 60 + minute;
    converted -= 45;

    if(converted < 0){
        converted += 24*60;
    }
    
    hour = converted/60;
    minute = converted%60;

    cout << hour << ' ' << minute << endl;


    return 0;
}