#include<iostream>
using namespace std;

class student{
    public:
        int rollno;
        int age;
    
    // Parameterised constructor
    student(int rollno){
        /* Here use of this keyword is mandotary because parameter and variable both are same */
        cout<<"Constructor called!"<<endl;
        (*this).rollno=rollno;
    }

    student(int r,int a){

        /* here this keyword use is optional reason being age and rollno clearly shows that it is same as
        student data memebers */

        cout<<"this: "<<this<<endl;
        cout<<"Constructor 2 called!"<<endl;
        this -> rollno=r;
        this -> age=a;
    }

    void display(){
        cout<<age<<" "<<rollno<<endl;
    }
    void display2(){
        cout<<rollno<<endl;
    }
};

int main(){
    student s1(10 , 100);
    cout<<"Address of s1: "<<&s1<<endl;

    student s2(20);
    s2.display2();
}