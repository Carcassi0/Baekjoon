#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    string word;
    vector<int> wordArray(27,0);

    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if(word[i] > 96){ // 모두 대문자 변환
            word[i] = word[i] - 32;
        }
        wordArray[word[i]-65]+=1;
    }

    int target = wordArray[0]; // 나온 횟수
    int targetIndex = 0; // 인덱스, 나중에 문자 복구 시 사용

    for (int i = 0; i < wordArray.size()-1; i++)
    {
        if(target < wordArray[i]){
            target = wordArray[i];
            targetIndex = i;
        }
    }

    int isUnique = 0;

    for (int i = 0; i < wordArray.size()-1; i++)
    {
        if(target==wordArray[i]) ++isUnique;
    }

    if (isUnique >=2){
        cout << "?" << endl;
        return 0;
    }
    

    char output = targetIndex + 65;

    cout << output << endl;

    
    
    return 0;
}
