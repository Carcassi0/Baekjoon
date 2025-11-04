#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> submitted(31, 0);

    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        submitted[n] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!submitted[i]) cout << i << '\n';
    }
    return 0;
}