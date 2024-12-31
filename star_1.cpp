#include <iostream>

using namespace std;

int main()
{
    int count;

    cin >> count;

    for (int i = 1; i < count+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}