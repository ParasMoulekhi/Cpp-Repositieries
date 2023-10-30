#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<"Enter value of fah:"<<endl;
    cin>>f;
    // int c=(5.0/9)*(f-32);
    int c=(5*(f-32))/9;
    cout<<(5.0/9)*(f-32)<<endl;
    cout<<c<<endl;

}