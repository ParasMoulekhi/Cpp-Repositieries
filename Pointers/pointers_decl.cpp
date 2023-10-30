#include<iostream>
using namespace std;

int main(){
    int a =5;
    cout<<"The address of a is "<<&a<<endl;

    //Declaration of pointers
    int* ptr = &a;
    cout<<"The address of a is "<<ptr<<endl;

    cout<<"The value at addres ptr is "<<*ptr<<endl;

    //Pointer to pointer
    int** d=&ptr;
    cout<<"The address of ptr is "<<d<<endl;
    cout<<"The value at address ptr is "<<**d<<endl;

    
}