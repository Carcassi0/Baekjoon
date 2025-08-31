#include <iostream>
#include <vector>

using namespace std;

int main (){
    int num = 0;
    int target = 0;
    int max = 0;
    vector<int> list;

    cin >> num;
    cin >> target;

    for(int i = 0; i< num; i++){
        int temp = 0;
        cin >> temp;
        list.push_back(temp);
    }

    for(int i = 0; i< list.size()-2; i++){
        int temp = 0;
        for(int j = i+1; j<list.size()-1; j++){
            for(int k = j+1; k<list.size(); k++){
                temp = list[i] + list[j] + list[k];   
                if(max < temp && temp <= target) max = temp;
            }
        }
    }
    cout << max << endl;
    return 0;
}