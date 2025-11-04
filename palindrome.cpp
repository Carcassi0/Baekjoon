#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string a,b;

    cin >> a;

    b = a;

    reverse(b.begin(),b.end());

    for(int i = 0; i<a.size()-1; i++){
        if(a[i]!=b[i]){
            cout << 0 << endl;
            return 0;
        }
    }

    cout << 1 << endl;


    return 0;
}