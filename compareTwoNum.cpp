#include <iostream>

using namespace std;

int main(){

    int a,b;

    cin >> a;
    cin >> b;

    if(a>b){cout << ">" << endl; return 0;}
    if(a<b){cout << "<" << endl; return 0;}
    if(a==b){cout << "==" << endl; return 0;}


    return 0;
}