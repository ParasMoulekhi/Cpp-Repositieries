#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;


    if(a==b){
        cout<<"Hey these are equal "<<endl;
    }else if(a>b){
        cout<<"a is greater "<<endl;
    }else{
        cout<<"a is smaller "<<endl;
    }


    /*if(a==b){
        cout<<"hey these are equal"<<"\n";
    }else{
        if(a>b){
            cout<<"a is greater than b "<<endl;
        }
        else{
            cout<<"a is smaller than b "<<endl;
        }
    }*/


    /*if(a==b){
        cout<<"both numbers are equal to each other "<<endl;
    }
    else{
        cout<<"Numbers are not equal "<<endl;
    } */
    return 0;
}