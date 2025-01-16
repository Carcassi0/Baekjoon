#include <iostream>
#include <vector>

using namespace std;
// 누적합

int main(){

    int n;
    int m;
    int temp;
    vector<int> list;
    
    
    cin >> n >> m;

    vector<int> result(n,0);

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        list.push_back(temp);
    }

    result[0] = list[0];

    for(int i = 1; i<=n; i++){
        result[i] += list[i] + result[i-1]; 
    }

    vector<int> answer;

    for (int i = 0; i < m; i++)
    {
        int a,b,num;
        cin >> a >> b;
        if(a>=2){
            num = result[b-1] - result[a-2];
        } else {
            num = result[b-1];
        }
        
        answer.push_back(num);
    }

    

    for (int i = 0; i < m; i++){
        cout << answer[i] << '\n';
    }
    

    return 0;
}