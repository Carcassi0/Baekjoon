#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int count;
    vector<string> result;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        string temp;
        cin >> temp;

        int open = 0; 
        bool isVPS = true;

        for (char c : temp)
        {
            if (c == '(')
            {
                ++open;
            }
            else if (c == ')')
            {
                --open;
                if (open < 0)
                {
                    isVPS = false;
                    break;
                }
            }
        }


        if (isVPS && open == 0)
        {
            result.push_back("YES");
        }
        else
        {
            result.push_back("NO");
        }
    }


    for (const string& res : result)
    {
        cout << res << '\n';
    }

    return 0;
}