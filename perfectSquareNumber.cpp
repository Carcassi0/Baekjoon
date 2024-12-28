#include <iostream>
#include <cmath>

using namespace std;

bool machine(int m, int n, int *least, int *sum)
{
    int flag = 0;
    int power = 0;

    for (; m <= n; m++)
    {
        power = sqrt(m);
        if((power*power)==m){
            if(flag==0){
                *least+=m;
            }
            ++flag;
            *sum += m;
        }
    }
    if(flag > 0)
        return true;
    else    
        return false;
    
}

int main()
{
    int m, n;
    int least = 0;
    int sum = 0;

    cin >> m;
    cin >> n;

    if (machine(m, n, &least, &sum))
    {
        cout << sum << endl;
        cout << least << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}