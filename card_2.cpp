#include <iostream>
#include <deque>

using namespace std;

int main()
{
    long long num;
    long long temp = 0;
    cin >> num;
    deque<long long> list;
    

    if(num==1){
        cout << 1 << '\n';
        return 0;
    }
    for (long long i = 1; i < num + 1; i++)
    {
        list.push_back(i);
    }

    while (1)
    {
        list.pop_front();
        if(list.size()==1){
            temp = list[0];
            break;
        }
        temp = list[0];
        list.pop_front();
        list.push_back(temp);
    }

    cout << temp << '\n';

    return 0;
}