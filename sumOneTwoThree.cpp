#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int count;
    int num;

    cin >> count;
    vector<int> solve(11, 0);
    solve[0] = 1;
    for (int i = 1; i <= 10; i++)
    {

            if (i- 1 >= 0)
                solve[i] += solve[i - 1];
            if (i- 2 >= 0)
                solve[i] += solve[i - 2];
            if (i- 3 >= 0)
                solve[i] += solve[i - 3];

    }

    while (count--)
    {
        int temp;
        cin >> temp;
        cout << solve[temp] << '\n';
    }

    return 0;
}