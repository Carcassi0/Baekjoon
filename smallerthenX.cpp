#include <iostream>

using namespace std;

int main()
{

    int count;
    int x;
    int total = 0;


    cin >> count;
    cin >> x;
    int list[count];
    int temp[count];

    for (int i = 0; i < count; i++)
    {
        cin >> temp[i+1];
    }
    
    for (int i = 0; i < count; i++){
        if(temp[i+1] < x){
            list[total+1] = temp[i+1];
            ++total;
        }
    }

    for (int i = 0; i < total; i++)
    {
        cout << list[i + 1];
        cout << " ";
    }
    cout << endl;

    return 0;
}