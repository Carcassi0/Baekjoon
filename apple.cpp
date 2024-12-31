#include <iostream>

using namespace std;

int main(){

    int count;
    int student;
    int total;
    int residual = 0;

    cin >> count;

    for(int i = 0; i<count; i++){
        cin >> student;
        cin >> total;
        residual += total%student;
        student = 0;
        total = 0;
    }

    cout << residual << endl;
    
    return 0;
}