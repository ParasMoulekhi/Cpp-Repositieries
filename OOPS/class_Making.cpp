#include<iostream>
using namespace std;
#include"student.cpp"



int main(){
    //Create objects statically
    student s1;
    student s2;
    student s3,s4,s5;

    s1.age = 23;
    s1.rollNumber = 101;
    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;

    //Create objects dynamically
    student *s6 = new student;
    (*s6).age=15;
    (*s6).rollNumber=101;
     
    s6 -> age = 45;
    s6 -> rollNumber=11;
    

    
}
