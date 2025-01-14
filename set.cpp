#include <iostream>
#include <string>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    int set = 0;
    string tempString;
    int temp;

    cin >> count;


    for(int i = 0; i<count; i++)
    {
        cin >> tempString;

        if (tempString == "add")
        {
            cin >> temp;
            set |= 1 << temp;
            continue;
        }
        else if (tempString == "remove")
        {
            cin >> temp;
            if(set & (1<<temp)){
                set &= ~(1<<temp);
            }
            continue;
        }
        else if (tempString == "check")
        {
            cin >> temp;
            if(set & (1<<temp)){
                cout << 1 << '\n';
            } else{
                cout << 0 << '\n';
            }
            continue;
        }
        else if (tempString == "toggle")
        {
            cin >> temp;
            if(set & (1<<temp)){
                set &= ~(1<<temp);
            } else{
                set |= 1 << temp;
            }

            continue;
        }
        else if (tempString == "all")
        {
            set |= (1<<21) - 1;
            continue;
        }
        else if (tempString == "empty")
        {
            set = 0;
            continue;
        }
    }

    return 0;
}