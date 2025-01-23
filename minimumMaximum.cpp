#include <iostream>
#include <vector>

using namespace std;

int main(){

    int count;
    int temp;
    int max;
    int min;
    vector<int> list;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> temp;
        list.push_back(temp);
    }

    max = list[0];

    for (int i = 1; i < count; i++)
    {
        if(max<list[i])
            max = list[i];
    }

    min = list[0];

    for (int i = 1; i < count; i++)
    {
        if(min>list[i])
            min = list[i];
    }

    cout << min << " " << max << endl;
        
    return 0;
}