#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int N, k;

    cin >> N >> k;

    vector<int> scoreList;


    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;

        scoreList.push_back(temp);
    }

    sort(scoreList.begin(), scoreList.end(), greater<int>());

    cout << scoreList[k-1] << endl;

    

    return 0;
}