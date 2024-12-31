#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    for (int i = 1; i < 10; i++)
    {
        cout << number;
        cout << " * ";
        cout << i;
        cout << " = ";
        cout << number * i;
        cout << endl;
    }

    return 0;
}