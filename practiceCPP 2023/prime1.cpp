#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int flag=0;
    for(int i=2;i<=n-1;i++){
        if(n % i==0){
            flag=1;
        }
    }
    // use equality check operator on flag==0
    if(flag==0){
        cout<<"PRIME NO.";
    }
    else{
        cout<<"NOT PRIME NO.";
    }
    

    return 0;

}