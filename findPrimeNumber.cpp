#include <iostream>

using namespace std;


int main(){

    int n;
    int list[101];
    int count = 0;
    int total = 0;

    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> list[i+1];
    }
    for(int i = 0; i<n; i++){ 
        for(int j = 0; j<list[i+1]; j++){ 
            if(list[i+1]%(j+1)==0){ 
                ++count;
            }
        }
        if(count == 2){
            ++total;
        }
        count = 0;
    }
    
    cout << total << endl;

    return 0;
}