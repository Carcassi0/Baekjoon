#include <iostream>
#include <string>

using namespace std;


int main(){

    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string temp;
        cin >> temp;
        cout << temp[0] << temp[temp.size()-1] << endl;
    }
    
    


    return 0;
}