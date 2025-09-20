#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num, step;
    cin >> num >> step;

    vector<int> alive(num, 1);
    vector<int> answer;
    answer.reserve(num);

    int current = 0;   // 현재 검사 위치
    int remaining = num;

    while (remaining > 0) {
        int cnt = 0;

        while (cnt < step) {
            if (alive[current]) {
                ++cnt;
                if (cnt == step) break;
            }
            current = (current + 1) % num;
        }

        answer.push_back(current + 1);
        alive[current] = 0;
        --remaining;


        current = (current + 1) % num;

    }

    cout << "<";
    for (int i = 0; i < (int)answer.size(); ++i) {
        cout << answer[i];
        if (i + 1 != (int)answer.size()) cout << ", ";
    }
    cout << ">\n";
    return 0;
}