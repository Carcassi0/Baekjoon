#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    double result = 0.0;
    double count = 0;

    for (int i = 0; i < 20; i++)
    {
        string name;
        cin >> name;

        double score;
        cin >> score;

        

        string gpa;
        cin >> gpa;

        double gpa_score = 0.0;
        if(gpa[0] == 'P') {
            continue;
        }

        if(gpa[0] == 'A'){gpa_score+=4.0;}
        if(gpa[0] == 'B'){gpa_score+=3.0;}
        if(gpa[0] == 'C'){gpa_score+=2.0;}
        if(gpa[0] == 'D'){gpa_score+=1.0;}
        if(gpa[1] == '+'){gpa_score+=0.5;}


        count += score;

        result += score * gpa_score;
        
    }

    if(count == 0){cout << 0.000000 << endl;}else{cout << result / count << endl;}
    
    
    
    return 0;
}