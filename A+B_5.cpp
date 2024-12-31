#include <iostream>

using namespace std;

int main()
{

    int count=0;
    int first;
    int second;
    int result[100];

    while (1)
    {
        cin >> first;
        cin >> second;
        if (first == 0 && second == 0){
            break;
        }
        ++count;
        result[count] = first + second;
    }

    for (int i = 0; i < count; i++)
    {
        cout << result[i + 1] << endl;
    }

    return 0;
}