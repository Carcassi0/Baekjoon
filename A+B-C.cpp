#include <iostream>

using namespace std;


int main(){

    int a, b, c;
    int resultNum = 0;
    

    cin >> a >> b >> c;

    resultNum = a + b - c;
    
    cout << resultNum << endl;

    int mult = 0;
    resultNum = 0;
    if(b>0 && b<10) mult = 10;
    if(b>=10 && b<100) mult = 100;
    if(b>=100 && b<1000) mult = 1000;
    if(b==1000) mult = 10000;
    resultNum = (a*mult+b)-c;

    cout << resultNum << endl;

    return 0;
}