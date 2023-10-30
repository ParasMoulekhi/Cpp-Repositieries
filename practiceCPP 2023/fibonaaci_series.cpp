#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no.of terms:";
    cin>>n;
    int a=0,b=1,c;
    for(a=0;a<n;){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}