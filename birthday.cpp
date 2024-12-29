#include <iostream>
#include <cstring>

using namespace std;

struct student{
    char name[16];
    int sum;
    int day;
    int month;
    int year;
};

int main(){

    struct student studentList[100];

    int studentCount;
    int youngest = studentCount-1;
    int youngestSum;
    int oldest = 0;


    cin >> studentCount;

    for(int i = 0; i<studentCount; i++){
        cin >> studentList[i].name;
        cin >> studentList[i].day;
        cin >> studentList[i].month;
        cin >> studentList[i].year;
        studentList[i].sum = studentList[i].day + studentList[i].month*30 + studentList[i].year*365;
    }

    for(int i = 1; i<studentCount; i++){
        if(studentList[i].year < studentList[oldest].year){
            oldest = i;
        }
        if(studentList[i].year == studentList[oldest].year){
            if(studentList[i].month < studentList[oldest].month){
                oldest = i;
            }
            if(studentList[i].month == studentList[oldest].month){
                if(studentList[i].day < studentList[oldest].day){
                    oldest = i;
                }
            }
        }
    }

    for(int i = 0; i<studentCount-1; i++){
        if(studentList[i].sum > studentList[youngest].sum){
            youngest = i;
        }
    }

    cout << studentList[youngest].name << endl;
    cout << studentList[oldest].name << endl;

    return 0;
}