#include <iostream>

using namespace std;

struct result{
    int grade;
    double gpa;
};

int main(){

    int semester;
    int subjectCount;
    double gpa;
    double gpaResult = 0.0;
    int grade;
    int gradeSum;
    struct result summary[100];

    cin >> semester;

    for(int i = 0; i<semester; i++){
        cin >> subjectCount;
        for(int j = 0; j<subjectCount; j++){
            cin >> grade;
            gradeSum += grade;
            cin >> gpa;
            gpaResult += grade * gpa;
        }
        summary[i+1].grade = gradeSum;
        summary[i+1].gpa = gpaResult/(double)gradeSum;
        gradeSum = 0;
        gpaResult = 0.0;
    }

    for(int i = 0; i<semester; i++){
        cout << summary[i+1].grade;
        cout << " " << summary[i+1].gpa << endl;
    }
    return 0;
}