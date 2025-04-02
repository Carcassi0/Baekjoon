#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int temp;
    priority_queue<int, vector<int>, less<int>> list;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (temp > 0)
        {
            list.push(temp);
        }
        else
        {
            if (list.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << list.top() << '\n';
                list.pop();
            }
        }
    }

    return 0;
}