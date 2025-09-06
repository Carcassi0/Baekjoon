#include <iostream>


using namespace std;

int main(){

    int first, second, third;
    int count = 0;
    int sameNum = 0;
    int prize = 0;
    int top = 0;

    cin >> first;
    cin >> second;
    cin >> third;

    if(first == second){
        count++;
        sameNum = first;
    }
    if(first == third) {
        count++;
        sameNum = first;
    }
    if(second == third){
        count++;
        sameNum = second;
    }

    if(count==3){
        prize = 10000+sameNum*1000;
    }
    if(count==1){
        prize = 1000+sameNum*100;
    }
    if(count==0){
       top = first;
       if(second > first) top = second;
       if(third > first && third > second) top = third;
       prize = top * 100;
    }


    cout << prize << endl;



    return 0;
}