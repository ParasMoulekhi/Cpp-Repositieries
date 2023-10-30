#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n number:"<<endl;
    cin>>n;
    bool divided=false;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime";
            divided=true;
        }
        i++;
    }
    if(!divided){
        cout<<"Prime";
    }
}