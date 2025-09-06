#include <iostream>
#include <string>

using namespace std;


int main(){

    // -61하기

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string word;
    int list[26];


    for(int i = 0; i < 26; i++) {
        list[i] = -1;
    }

    cin >> word;

    for(int i = 0; i<word.length(); i++){
        if(list[word[i]-97] <0){
            list[word[i]-97] += i+1;
        }
        
    }

    for(int i = 0; i<26; i++){
        cout << list[i] << ' ';
    }

    cout << endl;

    return 0;
}