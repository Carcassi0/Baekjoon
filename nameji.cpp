#include <iostream>
#include <vector>

using namespace std;


int main(){

    int tempArr[10] = {0,0,0,0,0,0,0,0,0,0};
    int count = 0;
    vector<int> isDupblicated;
    
    for(int i = 0; i<10; i++){
        int temp = 0;
        cin >> temp;
        tempArr[i] = temp%42;
    }

    for(int i = 0; i<10; i++){
        int target = tempArr[i];
        for(int j = i+1; j<10; j++){
            if(target != tempArr[j]){
                int duplicate = 0;
                for(int k = 0; k<isDupblicated.size(); k++){
                    if(isDupblicated[k]==target) duplicate++;
                }
                if(duplicate==0){
                    count++;
                    isDupblicated.push_back(target);
                }  
            }
        }
    }

    int duplicate_10 = 0;
        for(int k = 0; k<isDupblicated.size(); k++){
            if(isDupblicated[k]==tempArr[9]) duplicate_10++;
        }
        if(duplicate_10==0){
            count++;
        }

    cout << count << endl;
    return 0;
}