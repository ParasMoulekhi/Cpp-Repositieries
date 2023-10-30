#include<iostream>
using namespace std;

class student{
    public:
        int rollno; /* class variables */
        int age;

    // Default Constructor --> a constructor which has no parameters
    student(){
        cout<<"Constructor called!"<<endl;
    }

    // Parameterised Constructor
    student(int r){
        cout<<"Constructor 2 called!"<<endl;
        rollno=r;
    }

    student(int r,int a){ /* local variables */
        cout<<"Constructor 3 called!"<<endl;
        age=a;
        rollno=r;
    }

    void display(){
        cout<<rollno<<" "<<age<<endl;
    }
    
};
int main(){
    student s1;
    s1.display();

    student s2;

    student *s3=new student;
    (*s3).display();

    cout<<"\n";
    cout<<"Parameterised constructor demo "<<endl; 

    student s4(10);
    
    student *s5=new student(19);
    s5 -> display();

    student s6(12,13);
    s6.display();


}