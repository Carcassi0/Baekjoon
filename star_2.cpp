#include <iostream>

using namespace std;

int main()
{
    int count;

    cin >> count;

    for (int i = 1; i < count+1; i++)
    {
        for (int j = 0; j < count-i; j++)
        {
            cout << " ";
        }
        for(int k = 0; k<i; k++){
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}