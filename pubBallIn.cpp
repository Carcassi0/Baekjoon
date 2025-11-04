#include <iostream>
#include <vector>


using namespace std;

int main(){

    int basketSize;
    int count;

    cin >> basketSize >> count;

    vector<int> basket(basketSize+1,0);


    for (int i = 0; i < count; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;

        for(int i = a; i<=b; i++){
            basket[i] =  c;
        }
        
    }

    for(int i = 1; i < basket.size(); i++) {
        cout << basket[i];
        if(i!=basket.size()-1) cout << ' ';
    }

    cout << endl;
    



    return 0;
}