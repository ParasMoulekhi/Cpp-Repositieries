#include<iostream>
using namespace std;

int main(){
    int a[10];

    cout<<a<<endl;

    cout<<&a[0]<<endl;

    // int* ptr = &a[1];
    // cout<<ptr<<endl;

    a[0]=3;
    a[1]=14;
    2[a]=115;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(2+a)<<endl;

    int* p = &a[0];
    cout<<a<<endl;
    cout<<p<<endl;

    cout<<&a<<endl;
    cout<<&p<<endl;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;

    cout<<p<<endl;
    p=a+1;
    cout<<p<<endl;

    



    return 0;
}