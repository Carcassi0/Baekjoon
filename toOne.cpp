#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int num;
    int result = 0;

    cin >> num;

    vector<int> solve(num+1, 0);

    for(int i = 2; i<=num; ++i){
        solve[i] = solve[i-1] + 1;
        if(i%2==0){
            solve[i] = min(solve[i], solve[i/2] +1);
        }
        if(i%3==0){
            solve[i] = min(solve[i], solve[i/3] + 1);
        }
    }

    cout << solve[num] << '\n';
    return 0;
}