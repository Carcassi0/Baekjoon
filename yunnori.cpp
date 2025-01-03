#include <iostream>

using namespace std;

int main()
{

    char result[100];
    int list[5];
    int num = 0;

    for (int k = 0; k < 3; k++)
    {

        for (int i = 0; i < 4; i++)
        {
            cin >> list[i + 1];
        }

        for (int i = 0; i < 4; i++)
        {
            if (list[i + 1] == 0)
            {
                ++num;
            }
        }
        if (num == 1)
        {
            result[k + 1] = 'A';
        }
        if (num == 2)
        {
            result[k + 1] = 'B';
        }
        if (num == 3)
        {
            result[k + 1] = 'C';
        }
        if (num == 4)
        {
            result[k + 1] = 'D';
        }
        if (num == 0)
        {
            result[k + 1] = 'E';
        }

        num = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << result[i + 1] << endl;
    }

    return 0;
}