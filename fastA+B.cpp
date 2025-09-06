#include <iostream>

using namespace std;

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a,b;
    int total;

    cin >> total;

    for(int i = 0; i< total; i++){
        int temp = 0;
        cin >> a;
        cin >> b;
        temp = a+b;
        cout << temp << '\n';
    }

    

    return 0;
}