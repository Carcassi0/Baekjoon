#include <iostream>
#include <vector>

using namespace std;

int countZero = 0;
int countOne = 0;

struct resultStruct{
    int zero;
    int one;
};

int main()
{

    int testCount;
    int temp;
    vector<int> list;
    vector<int> result;
    

    cin >> testCount;

    for (int i = 0; i < testCount; i++) // test case
    {
        cin >> temp;
        list.push_back(temp);
    }

    vector<resultStruct> resultList(41);

    resultList[0] = {1, 0};
    resultList[1] = {0, 1};

    for (int i = 2; i < 41; i++)
    {
        resultList[i].zero = resultList[i-1].zero + resultList[i-2].zero;
        resultList[i].one = resultList[i-1].one + resultList[i-2].one;
    }

    for (int i = 0; i < testCount; i++){
        cout << resultList[list[i]].zero << " " << resultList[list[i]].one << '\n';
    }

    return 0;
}