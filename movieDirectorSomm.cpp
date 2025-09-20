#include <iostream>
#include <string>

using namespace std;

int main(){

    int num;
    int target = 0;
    int base = 666;

    cin >> num;

    while(1){
        int streak = 0;
        int streaked = 0;
        string targetString = to_string(base);
        for(int i = 0; i < targetString.length(); i++){
            if(targetString[i]=='6'){
                ++streak;
                if(streak == 3) ++streaked;
            } else {
                streak = 0;
            }
        }
        if(streaked == 1) ++target;
        if(target == num) break;
        base++;
    }

    cout << base << endl;
    
    return 0;
}