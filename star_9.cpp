#include <iostream>

using namespace std;

int main()
{

    int num;

    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * num - 1 - 2 * (i - 1); k++)
        {
            cout << "*";
        }
        cout << " ";
        cout << endl;
    }

    for (int i = 2; i < num + 1; i++)
    {
        for (int j = 0; j < (num - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << " ";
        cout << endl;
    }
    return 0;
}