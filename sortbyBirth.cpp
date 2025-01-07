#include <iostream>
#include <map>

using namespace std;

int main()
{

    int count;
    int age;
    string name;
    multimap<int, string> list;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> age >> name;
        list.insert({age,name});
    }

    for (const auto &pair : list)
    {
        cout << pair.first << " " << pair.second << '\n';
    }

    return 0;
}