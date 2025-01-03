#include <iostream>

using namespace std;

int main()
{

    int temp;
    int minimum = 0;
    int flag = 0;
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> temp;
        if (temp % 2 != 0)
        {
            sum += temp;
            if (flag == 0)
            {
                minimum = temp;
                flag = 1;
                continue;
            }
            if(temp < minimum){
                minimum = temp;
            }
        }
    }

    if(sum == 0){
        cout << -1 << endl;
        return 0;
    }

    cout << sum << endl << minimum << endl;
    return 0;
}