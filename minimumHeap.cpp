#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    
    int N, x;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < N; ++i) {
        cin >> x;
        if (x > 0) {
            minHeap.push(x); // 자연수 추가
        } else {
            
            if (minHeap.empty()) {
                cout << 0 << '\n';
            } else {
                cout << minHeap.top() << '\n';
                minHeap.pop();
            }
        }
    }

    return 0;
}