#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> array;
    for(int i = 0; i<N; i++){
        int temp;
        cin >> temp;
        array.push_back(temp);
    }

    sort(array.begin(), array.end());

    for(int i = 0; i<N; i++){
        cout << array[i] << endl;
    }

    return 0;
}