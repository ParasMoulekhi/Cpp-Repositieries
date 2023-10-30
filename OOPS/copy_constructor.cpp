#include<iostream>
using namespace std;

class student{
    public:
        int rollno;
        int age;
    
    //parameterised constructor
    student(int age,int rollno){
        cout<<"Constructor called!"<<endl;
        this->age=age;
        this->rollno=rollno;
    }

    ~student(){
    cout<<"Destructor called!"<<endl;
    }
    void display(){
        cout<<age<<" "<<rollno<<endl;
    }
};

int main(){

    student s1(30,501);
    student s2(32,502);
    student *s3=new student(34,503);

    s2=s1; /* Copy assignment operator */
    *s3=s1;
    s2=*s3;
    delete s3;




    /*student s1(23,1002);
    cout<<"S1: ";
    s1.display();

    student s2(s1);
    cout<<"S2: ";
    s2.display();

    student *s3=new student(33,2003);
    cout<<"S3: ";
    s3->display();

    student *s4=new student(*s3);
    cout<<"S4: ";
    s4->display();

    student s5(*s3);
    cout<<"S5: ";
    s5.display();*/

}