#include<iostream>
using namespace std;

int main(){
    int gcd=0;
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    if(a>b){
        for(int i=1;i<a;i++){
            if(a % i == 0 && b % i == 0){
                gcd=i;
            }     
        }  

    }
    else{
        for(int i=1;i<b;i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
    }
    cout<<gcd;
    return 0;
}