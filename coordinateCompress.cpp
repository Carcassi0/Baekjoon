#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int marker = 0;
    int count = 0;
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> numList;
    vector<int> tempList;
    unordered_map<int,int> compressedList;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        numList.push_back(temp);
        compressedList[temp] = 0;   
    }
    tempList = numList;

    sort(numList.begin(), numList.end());
    numList.erase(unique(numList.begin(), numList.end()), numList.end()); 

    // 압축 값 할당
    for (int i = 0; i < numList.size(); i++) {
        compressedList[numList[i]] = i;
    }

    // 출력 (입력 순서 유지)
    for (int i = 0; i < N - 1; i++) {
        cout << compressedList[tempList[i]] << ' ';
    }
    cout << compressedList[tempList[N - 1]] << '\n';

    return 0;
}