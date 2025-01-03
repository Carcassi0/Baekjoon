#include <iostream>

using namespace std;

int fibonacci(long long a, long long b, int num, int sequence){
    if(sequence == num){
        cout << b << endl;
        return 0;
    }
    ++sequence;
    return fibonacci(b, a+b, num, sequence);
}

int main(){

    int num;
    int sequence=1;

    cin >> num;

    fibonacci(0,1,num,sequence);


    return 0;
}