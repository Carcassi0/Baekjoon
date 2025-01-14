#include <iostream>
#include <set>

using namespace std;

int main()
{

    int count;
    int temp;
    int minimumTime = 0;
    int result = 0;
    set<int> list;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> temp;
        list.insert(temp);
    }



    for (auto iter = list.begin(); iter != list.end(); ++iter)
    {  
        cout << *iter << endl;
        result += *iter + minimumTime;
        minimumTime += result;
    }
    auto init = list.begin();
    result -= *init;

    cout << result << endl;

    return 0;
}