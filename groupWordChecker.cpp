#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    int N;
    int count = 0;
    
    cin >> N;

    for(int i = 0; i<N; i++){
        vector<int> alphabetList(27,0);
        string tempWord;
        bool isGroupWord = true;
        cin >> tempWord;

        if(tempWord.size() == 1){
            ++count;
            continue;
        }
        for (int j= 0; j < tempWord.size(); j++)
        {
            if(j == 0){
                alphabetList[tempWord[j]-97] += 1;
                continue;
            }
           if(tempWord[j] != tempWord[j-1]){
            alphabetList[tempWord[j]-97] += 1;
           }
        }

        for (int j = 0; j < alphabetList.size()-1; j++)
        {

            if(alphabetList[j] >= 2){
                isGroupWord = false;
            }
        }
        if(isGroupWord) ++count;
    }

    cout << count << endl;
    return 0;
}