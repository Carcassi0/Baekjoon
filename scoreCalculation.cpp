#include <iostream>

using namespace std;

int main()
{

    int flag = 0;
    int count;
    int num;
    int score = 0;
    int totalScore = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num;
        if (num == 0)
        {
            flag = 0;
            score  = 0;
            continue;
        }
        else
        {
            if (flag == 1)
            {
                ++score;
                totalScore += score;
            }
            if (flag == 0){
                ++score;
                totalScore += 1;
                flag = 1;
            }
        }
    }

    cout << totalScore << endl;
    return 0;
}