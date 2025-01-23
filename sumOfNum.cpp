#include <iostream>
#include <string>

using namespace std;

int main() {
    int digit;
    string num;
    int sum = 0;

    cin >> digit >> num;

  
    for (int i = 0; i < digit; i++) {
        int temp = num[num.size() - 1 - i] - '0';
        sum += temp;          
    }
    
    cout << sum << endl; 
    return 0;
}