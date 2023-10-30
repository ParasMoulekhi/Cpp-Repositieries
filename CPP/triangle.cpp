#include<iostream>
using namespace std;
int main(){
    cout<<"Enter three numbers to check these are form a traingle or not:";
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>c){
      cout<<"Yes,they can form a triangle";
    }
    else if((b+c)>a){
        cout<<"Yes,they can form h triangle";
    }
    else{
        cout<<"Yes,they can form a triangle";
    }
    
    
}