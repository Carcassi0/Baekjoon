#include <iostream>
#include <vector>

using namespace std;


int main(){
    int num;
    vector<int> numList;
    int target;
    int count = 0;

    cin >> num;

    for(int i = 0; i<num; i++){
        int temp;
        cin >> temp;
        numList.push_back(temp);
    }

    cin >> target;

    for(int i = 0; i<num; i++){
        if(numList[i] == target) ++count;
    }

    cout << count << endl;

    return 0;
}