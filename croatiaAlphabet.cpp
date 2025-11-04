#include <iostream>
#include <string>


using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    int count = 0;
    int pointer = 0;

    cin >> word;

    while(1){
        if(word[pointer] == 'c' && (word[pointer+1] == '=' || word[pointer+1] == '-')){
            pointer += 2;
            ++count;
            continue;
        }
        if(word[pointer] == 'd'){
            if(word[pointer+1] == 'z' && word[pointer+2] == '='){
                pointer += 3;
                ++count;
                continue;
            }
            if(word[pointer+1] == '-'){
                pointer += 2;
                ++count;
                continue;
            }
        }
        if(word[pointer] =='l' && word[pointer+1] == 'j'){
            pointer += 2;
            ++count;
            continue;
        }
        if(word[pointer] =='n' && word[pointer+1] == 'j'){
            pointer += 2;
            ++count;
            continue;
        }
         if((word[pointer] == 's' || word[pointer] == 'z') && (word[pointer+1] == '=' || word[pointer+1] == '-')){
            pointer += 2;
            ++count;
            continue;
        }
        if((pointer > word.size()-1) && pointer != 0) break;
        ++count;
        ++pointer;
    }

    cout << count << endl;
        
    
    

    return 0;
}