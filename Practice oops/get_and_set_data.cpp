#include<iostream>
using namespace std;

class student{
    private:
        int age;
    public:
        int rollno;
        int studentid;
    public:
        int setage(int a , int password){
            if(password != 123){
                return;
            }
            if(a<0){
                return ;
            }
            age=a;
            return age;
        }
        void display(){
            cout<<age<<" "<<rollno<<endl;
        }
};

int main(){
    student s1; // create objects statically
    student *s2=new student; // create objects dynamically

    s1.rollno=13;
    (*s2).rollno=16;
    
    s1.setage(20 , 123);
    (*s2).setage(18,123);
    
    s1.display();
    (*s2).display();

}