#include <iostream>
#include <vector>

using namespace std;


int main(){

    int N, M;

    cin >> N >> M;

    vector<int> basket(N+1, 0);

    for (int i = 1; i <= N; i++)
    {
        basket[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        int a,b;
        cin >> a >> b;
        int temp;
        temp = basket[a];
        basket[a] =  basket[b];
        basket[b] = temp;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << basket[i];
        if(i!=N) cout << ' ';
    }
    
    cout << endl;

    return 0;
}