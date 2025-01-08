#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string command;
    int num;
    vector<int> stack;
    vector<int> result;
    int count;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> num;
            stack.push_back(num);
            continue;
        }
        if (command == "pop")
        {
            if (stack.size() == 0)
            {
                result.push_back(-1);
                continue;
            }
            else
            {
                auto i = stack.end();
                --i;
                result.push_back(*i);
                stack.pop_back();
                continue;
            }
        }
        if (command == "size")
        {
            result.push_back(stack.size());
            continue;
        }
        if (command == "empty")
        {
            if (stack.empty())
            {
                result.push_back(1);
            }
            else
            {
                result.push_back(0);
            }
            continue;
        }
        if (command == "top")
        {
            if (stack.size() == 0)
            {
                result.push_back(-1);
                continue;
            }
            else
            {
                auto i = stack.end();
                --i;
                result.push_back(*i);
                continue;
            }
        }
    }
    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j] << '\n';
    }
    return 0;
}