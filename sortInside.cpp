#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


bool myCompare(char& a, char& b) {
    return a > b;
}

int main(){

    string numString;

    cin >> numString;

    sort(numString.begin(), numString.end(), myCompare);

    cout << numString << endl;



    return 0;
}