#include <iostream>
#include <set>

using namespace std;


int main(){

    set<int> list;
    int count;
    string tempString;
    int tempNum;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> tempString;

        if(tempString == "add"){
            cin >> tempNum;
            list.insert(tempNum);
        }
        if(tempString == "remove"){
            cin >> tempNum;
            list.erase(tempNum);
        }
        if(tempString == "check"){
            cin >> tempNum;
            if(list.find(tempNum)!=list.end()){
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
        if(tempString == "toggle"){
            cin >> tempNum;
            if(!list.erase(tempNum)){
                list.insert(tempNum);
            }
        }
        if(tempString == "all"){
            list.clear();
            for (int i = 1; i < 21; i++)
            {
                list.insert(i);
            }
        }
        if(tempString == "empty"){
            list.clear();
        }
    }
    return 0;
}