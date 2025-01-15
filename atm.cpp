#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int count;
    cin >> count;

    int list[count];
    for (int i = 0; i < count; i++) {
        cin >> list[i];
    }


    sort(list, list + count);

    int result = 0;
    int cumulativeSum = 0;


    for (int i = 0; i < count; i++) {
        cumulativeSum += list[i];
        result += cumulativeSum;
    }

    cout << result << endl;
    return 0;
}