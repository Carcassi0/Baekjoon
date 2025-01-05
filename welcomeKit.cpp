#include <iostream>

using namespace std;

int main(){

    int count;
    int list[6];
    int tshirt = 0;
    int pen = 0;
    int tResult = 0;
    int penResult = 0;
    int penResultSingle = 0;

    cin >> count;

    for(int i = 0; i<6; i++){
        cin >> list[i];
    }

    cin >> tshirt >> pen;

    for(int i = 0; i<6; i++){
        if(list[i]/tshirt >= 1 & list[i]%tshirt != 0){
            tResult += (list[i]/tshirt) + 1;
            continue;
        }
        if(list[i]/tshirt >= 1 & list[i]%tshirt == 0){
            tResult += list[i]/tshirt;
            continue;
        }
        if(list[i]==0){
            continue;
        }  
        else {
            tResult += 1;
        }
    }

    penResult = count / pen;
    penResultSingle = count%pen;



    cout << tResult << endl << penResult << " " << penResultSingle << endl;

    return 0;
}