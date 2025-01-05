#include <iostream>
#include <vector>

using namespace std;

void calculateSums(vector<int>& arr, vector<int>& comb, vector<int>& sums, int start, int depth) {
    if (depth == 3) { 
        int sum = 0;
        for (int num : comb) {
            sum += num;
        }
        sums.push_back(sum);
        return;
    }

    for (int i = start; i < arr.size(); i++) {
        comb.push_back(arr[i]); 
        calculateSums(arr, comb, sums, i + 1, depth + 1); 
        comb.pop_back(); 
    }
}
int main(){
    int cardCount;
    int max;
    int result = 0;
    int num;
    int i = 0;
    vector<int> availList;
    vector<int> combList;
    vector<int> sumList;

    cin >> cardCount >> max;

    for(int i = 0; i<cardCount; i++){
        cin >> num;
        availList.push_back(num);
    }
    calculateSums(availList, combList, sumList, 0, 0);

    while(1){
        if(sumList[i] <= max){
            result = sumList[i];
            break;
        }
        ++i;
    }
    for(int i = 1; i<sumList.size(); i++){
        if(sumList[i]<=max){
            if(result<sumList[i]){
                result = sumList[i];
            }
        }
    }

    cout << result << endl;
    return 0;
}