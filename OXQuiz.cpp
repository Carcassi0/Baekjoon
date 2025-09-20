#include <iostream>

using namespace std;

int main() {
    int caseCount;
    cin >> caseCount;
    cin.ignore();
    
    for (int i = 0; i < caseCount; i++) {
        int streak = 1;
        int point = 0;
        string testCase;
        getline(cin, testCase);
        for (int j = 0; j < testCase.length(); j++) {
            if (testCase[j] == 'O') {
                point += streak;
                streak++;
            } else if (testCase[j] == 'X') {
                streak = 1;
            }
        }
        cout << point << endl;
    }
    return 0;
}
