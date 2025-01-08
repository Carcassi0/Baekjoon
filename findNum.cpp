#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{

    int nCount;
    int mCount;
    int num;
    set<int> A;
    vector<int> M;

    cin >> nCount;

    for (int i = 0; i < nCount; i++)
    {
        cin >> num;
        A.insert(num);
    }

    cin >> mCount;

    for (int i = 0; i < mCount; i++)
    {
        cin >> num;
        M.push_back(num);
    }

    for (int i = 0; i < mCount; i++)
    {
        if (A.find(M[i]) == A.end())
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }

    return 0;
}