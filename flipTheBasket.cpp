#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    int N,M;

    cin >> N >> M;

    vector<int> basketList(N+1);
    for (int i = 1; i <= N; ++i) {
        basketList[i] = i;
    }

    for(int i = 0; i<M; i++){
        int a, b;
        cin >> a >> b;
        if(a>b) {reverse(basketList.begin() + b, basketList.begin() + a + 1); continue;};
        if(a<b) {reverse(basketList.begin() + a, basketList.begin() + b + 1); continue;};
    }

    for (int i = 1; i <= N; ++i) {
        cout << basketList[i] << " ";
    }

    cout << endl;

    
    
    return 0;
}