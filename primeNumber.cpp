#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false; 
    for (int i = 2; i <= sqrt(num); i++) { // 소수는 sqrt(대상숫자)까지만 확인
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;

    int sum = 0;
    int least = 0;
    bool foundPrime = false;

    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            if (!foundPrime) {
                least = i; 
                foundPrime = true;
            }
            sum += i;
        }
    }

    if (sum == 0) {
        cout << -1 << endl; 
    } else {
        cout << sum << endl; 
        cout << least << endl; 
    }

    return 0;
}