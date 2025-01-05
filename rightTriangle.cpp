#include <iostream>
#include <vector>

using namespace std;

bool isRightTriangle(int a, int b, int c)
{
    if(a*a==b*b+c*c|b*b==a*a+c*c|c*c==b*b+a*a){
        return true;
    }else{
        return false;
    }
};


int main(){

    vector<string> list;

    int count = 0;

    while(1){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==0&b==0&c==0){
            break;
        }
        if(isRightTriangle(a,b,c)){
            list.push_back("right");
            ++count;
        } else{
            list.push_back("wrong");
            ++count;
        }
    }

    for(int i = 0; i<count; i++){
        cout << list[i] << endl;
    }


    return 0;
}