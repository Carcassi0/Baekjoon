#include <iostream>
#include <string>

using namespace std;


int main(){
    string target;
    int count=0;
    bool device = true;
    getline(cin, target);


    for(int i = 0; i< target.length(); i++){
        if(device){
            if(target[i] != ' '){
                count++;
                device = false;
            }
        }
        if(target[i] == ' '){
            device = true;
        }
    }

    cout << count << endl;
    

    return 0;
}