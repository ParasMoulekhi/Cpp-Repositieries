#include<iostream>
using namespace std;

class student{
    private:
        double fee;
    public:
        int age;
        int rollno;

    // Default constructor

    student(){
        cout<<"Constructor called!"<<endl; //object create hote hi constructor call hoga
    }

    //Default destructor

    ~student(){
        cout<<"Destructor called!"<<endl; //object destroy hote hi destructor call hoga
    }
};
int main(){
    student *s1=new student;
    student s2;
    delete s1;
}