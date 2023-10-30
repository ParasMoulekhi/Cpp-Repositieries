#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

    bool isAEQUAL=(a==b);
    bool isAGREATER=a>b;
    bool isALESS=a<b;

    cout<<"are they equal "<<isAEQUAL<<endl;
    cout<<"is a greater "<<isAGREATER<<endl;
    cout<<"is a less "<<isALESS<<endl;

    bool third=isAEQUAL && isAGREATER;
    bool fourth=isAEQUAL || isAGREATER;

    cout<<third<<endl;
    cout<<fourth<<endl;

    cout<<"Not equal "<<!isAEQUAL<<endl;
    


}