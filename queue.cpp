#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(){

    string command;
    int num;
    deque<int> queue;
    vector<int> result;
    int count;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> num;
            queue.push_back(num);
            continue;
        }
        if (command == "pop")
        {
            if (queue.size() == 0)
            {
                result.push_back(-1);
                continue;
            }
            else
            {
                auto i = queue.begin();
                result.push_back(*i);
                queue.pop_front();
                continue;
            }
        }
        if (command == "size")
        {
            result.push_back(queue.size());
            continue;
        }
        if (command == "empty")
        {
            if (queue.empty())
            {
                result.push_back(1);
            }
            else
            {
                result.push_back(0);
            }
            continue;
        }
        if (command == "front")
        {
            if (queue.size() == 0)
            {
                result.push_back(-1);
                continue;
            }
            else
            {
                auto i = queue.begin();
                result.push_back(*i);
                continue;
            }
        }
        if(command == "back"){
            if (queue.size() == 0)
            {
                result.push_back(-1);
                continue;
            }
            else
            {
                auto i = queue.end();
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