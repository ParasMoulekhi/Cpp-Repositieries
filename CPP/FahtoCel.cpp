#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a fahr value:"<<endl;

    int f;

    cin>>f;

    int c=(5.0/9)*(f-32);
    //  c=(5*(f-32))/9;
    int r=10%3;
    cout<<10%3<<endl;
    cout<<c<<endl;
    return 0;
}