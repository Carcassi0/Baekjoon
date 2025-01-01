#include <iostream>

using namespace std;

int main()
{

    int count;
    int total = 0;
    int output;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> output;
        if (total == 0)
        {
            total += output;
        }
        else
        {
            total += output - 1;
        }
    }
    cout << total << endl;
    
    return 0;
}