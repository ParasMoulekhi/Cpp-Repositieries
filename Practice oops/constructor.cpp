#include<iostream>
using namespace std;

class student{
    private:
        int rollno;  /* class variables */
        int studentid;
    public:
        int age;
    
    //default constructor --> a constructor which has no parameters 
    student(){
        cout<<"I am a default constructor!"<<endl;
    }

    //parameterised constructor

    student(int rollno,int studentid , int age){
        cout<<"constructor 2 called!"<<endl;
        this->rollno=rollno; /* local variables */
        this->studentid=studentid;
        this->age=age;
    }
    void display(){
        cout<<rollno<<" "<<studentid<<" "<<age<<endl;
    }

};
int main(){
    student s1,s5,s6;

    student s2(201,20014,13);
    s2.display();

    student *s3=new student(202,20015,14);
    s3->display();
    


}