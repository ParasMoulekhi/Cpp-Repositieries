#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number to check whether it is prime or not:";
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<n;i++){
        if(n % i == 0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Number is prime "<<endl;
    }
    else{
        cout<<"Number is not prime "<<endl;
    }
    return 0;
}