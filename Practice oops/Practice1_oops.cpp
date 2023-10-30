#include<iostream>
using namespace std;

class student{
    private:
        int age;
    public:
        int rollNo;
        string address;
    
    public:
        int getage(){
            return age;
        }
        
        void display(){
            cout<<age<<" "<<rollNo<<endl;
        }
};

int main(){
    // Create objects statically 
    student s1,s2;
    s1.rollNo=12;
    s1.address="Radha kunj";

    // cout<<"Roll no. is: "<<s1.rollNo<<endl;
    // cout<<"Address is: "<<s1.address<<endl;

    cout<<"s1 age is: "<<s1.getage()<<endl;
    cout<<"s1 rollno is: "<<s1.rollNo<<endl;
    
    s1.display();
    
    



    // Create objects dynamically

    student *s3=new student;
    s3->rollNo=14;
    s3->address="Rohini";
    // cout<<"Roll no. is: "<<s3->rollNo<<endl;
    // cout<<"Address is: "<<s3->address<<endl;

    cout<<"s3 age is: "<<(*s3).getage()<<endl;
    cout<<"s3 rollno. is: "<<(*s3).rollNo<<endl;

    (*s3).display();

}

