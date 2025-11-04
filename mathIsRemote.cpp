#include <iostream>
#include <vector>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,e,f;
    int resultX, resultY;

    cin >> a >> b >> c >> d >> e >> f;

    for(int x = -999; x <= 999; x++ ){
        for (int y = -999; y <= 999; y++)
        {
            bool correct1 = false;
        bool correct2 = false;

        if(a*x+b*y==c){
            correct1 = true;
        }
        if(d*x+e*y==f){
            correct2 = true;
        }

        if(correct1 == true && correct2 == true) {
            resultX = x;
            resultY = y;
            break;
        }

        }

    }

    cout << resultX << " " << resultY << endl;

    return 0;
}