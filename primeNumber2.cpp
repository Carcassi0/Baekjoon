#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> numList;
    int count = 0;
    int middle = 0;

    for (int i = 0; i < 5; i++)
    {
        int temp;

        cin >> temp;
        count += temp;
        numList.push_back(temp);
    }

    sort(numList.begin(), numList.end());

    cout << count/5 << endl;
    cout << numList[2] << endl;
    
    return 0;
}