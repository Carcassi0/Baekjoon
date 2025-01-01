#include <iostream>

using namespace std;

int main()
{

    int num;

    cin >> num;

    for (int i = 1; i < num + 1; i++)
    {
        for (int k = 0; k < i ; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < (2*num - 2*i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i ; k++)
        {
            cout << "*";
        }
        cout << " ";
        cout << endl;
    }


    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < (num-1)-(i-1); j++)
        {
            cout << "*";
        }
        
        for (int k = 0; k < 2*i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < (num-1)-(i-1); j++)
        {
            cout << "*";
        }
        cout << " ";
        cout << endl;
    }
    return 0;
}