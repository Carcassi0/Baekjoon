#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{

    int numCount;
    int num;
    int temp;
    vector<int> list;
    vector<int> totalList;
    vector<int> resultList;
    unordered_map<int, int> freq;

    cin >> numCount;

    for (int i = 0; i < numCount; i++)
    {
        cin >> num;
        list.push_back(num);
    }

    cin >> numCount;

    for (int i = 0; i < numCount; i++)
    {
        cin >> num;
        totalList.push_back(num);
    }

    for(int i : list){
        freq[i]++;
    }

    for (int i : totalList)
    {
        cout << freq[i] << " ";
    }

    cout << '\n';

    return 0;
}