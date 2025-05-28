#include <bits/stdc++.h>
using namespace std;
//writting class
class Student{
    public:
    char name[100];
    int roll;
    char sec;
    double gpa;
}; // don't forget to use semicolon after class
int main(){
    Student a;
    //a.name = "sadee"; // we can assign name like other because it is an array and as we know it doesn't behave like other datatype
    //char s[100] = "sadee" // we can assign value to the array while declaring but we can't define the value after decalaration

    // so what we can do it simply copy the array to the array we want to store the string
    // taking one extra array for that 
    char tmp[100] = "sadee";
    strcpy(a.name, tmp); // it will copy the array to a.name
    a.roll = 10;
    a.gpa = 3.5;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}