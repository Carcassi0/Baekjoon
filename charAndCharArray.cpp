#include <iostream>
#include <string>

using namespace std;


int main(){

    string word;
    int num;

    cin >> word;
    cin >> num;

    cout << word[num-1] << endl;

    return 0;
}