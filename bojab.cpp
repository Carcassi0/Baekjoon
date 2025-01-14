#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n;
    int m;

    vector<string> a;
    set<string> b;
    set<string> result;
    string temp;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        b.insert(temp);
    }

    for (int i = 0; i < n; i++)
    {
        if (b.find(a[i]) != b.end())
        {
            result.insert(a[i]);

        }
    }

    cout << result.size() << '\n';
    for (auto iter = result.begin(); iter != result.end(); ++iter)
    {
        cout << *iter << '\n';
    }
    

    return 0;
}