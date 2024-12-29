#include <iostream>
#include <string>

using namespace std;

struct time{
    int hour;
    int minute;
    int second;
};

int main(){
    
    struct time currentTime = {0,0,0};
    struct time setTime= {0,0,0};
    struct time outputTime= {0,0,0};
    char currentInput[9];
    char setInput[9];
    char remainOutput[9];

    cin >> currentInput;
    cin >> setInput;
    
    // convert
    currentTime.hour += (currentInput[0]-'0')*10;
    currentTime.hour += (currentInput[1]- '0');
    currentTime.minute += (currentInput[3]-'0')*10;
    currentTime.minute += (currentInput[4]-'0');
    currentTime.second += (currentInput[6]-'0')*10;
    currentTime.second += (currentInput[7]-'0');

    setTime.hour += (setInput[0]-'0')*10;
    setTime.hour += (setInput[1]-'0');
    setTime.minute += (setInput[3]-'0')*10;
    setTime.minute += (setInput[4]-'0');
    setTime.second += (setInput[6]-'0')*10;
    setTime.second += (setInput[7]-'0');

    // second
    if((setTime.second - currentTime.second)<0){
        setTime.minute -= 1;
        outputTime.second = 60 + setTime.second - currentTime.second; 
    }else{
        outputTime.second = setTime.second - currentTime.second;
    }
    // minute
    if((setTime.minute - currentTime.minute)<0){
        setTime.hour -= 1;
        outputTime.minute = 60 + setTime.minute - currentTime.minute; 
    }else{
        outputTime.minute = setTime.minute - currentTime.minute;
    }
    // hour
    if((setTime.hour - currentTime.hour)<0){
        outputTime.hour = 24 + setTime.hour - currentTime.hour; 
    }else{
        outputTime.hour = setTime.hour - currentTime.hour;
    }
    
    
    cout.width(2);
    cout.fill('0');
    cout << outputTime.hour;
    cout << ':';
    
    cout.width(2);
    cout.fill('0');
    cout << outputTime.minute;
    cout << ':';
    
    cout.width(2);
    cout.fill('0');
    cout << outputTime.second;
    cout << endl;

    return 0;
}