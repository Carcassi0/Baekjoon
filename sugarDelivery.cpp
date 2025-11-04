#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int count = 9999;

    cin >> N;

    for (int i = 0; i < 1700; i++)
    {
        for(int j = 0; j <= 1000; j++){
            if(3*i+5*j==N){
                if(count > i+j){
                    count = i+j;
                }
            }
        }
    }
    
    if(count == 9999){
        cout << -1 << endl;
        return 0;
    }

    cout << count << endl;


    return 0;
}