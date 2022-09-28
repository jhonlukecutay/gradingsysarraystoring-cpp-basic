#include<iostream>
using namespace std;

int gradesLimit,gradesCal,average,totalg, grade[0];
string  nameStu,name, result;

int main() {

    cout<<"Grading System (w/ ArrayStoring)"<<endl<<endl<<"Please enter the name of student: ";
    getline(cin, nameStu); name = nameStu;
    cout<<endl<<"How many grades are need to be calculated? Input here: "; cin>>gradesLimit;
    cout<<endl<<"The grades that need to be calculated are: "<<gradesLimit<<endl<<endl;

    for(gradesCal=1;gradesCal<=gradesLimit;gradesCal++) {
        cout<<"Input the grades: "; cin>>grade[gradesLimit];
        totalg = totalg + grade[gradesLimit];
}
    average = totalg / gradesLimit;
    cout<<endl<<endl<<"The Student Name is "<<name<<" and his/her general average is: "<<average<<endl<<endl;
    result = (average > 75) ? "The student passed the semester." : "The student failed to pass the semester.";
    cout<<endl<<endl<<result<<endl<<endl;






}
