#include <iostream>

using namespace std;

struct result{
    int child = 0;
    int parent = 0;
};

int main(){

    int testCount;
    int candy;
    int children;
    struct result list[1000];

    cin >> testCount;
    
    for(int i = 0; i<testCount; i++){
        cin >> candy;
        cin >> children;
        list[i+1].child = candy/children;
        list[i+1].parent = candy%children;
    }

    for(int i = 0; i<testCount; i++){
        cout << "You get " << list[i+1].child << " piece(s) and your dad gets ";
        cout << list[i+1].parent << " piece(s)." << endl;
    }

    return 0;
}