#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter binary number: ";
    cin>>n;
    int ans=0,pv=1;
    while(n!=0){
        int temp=n%10;
        pv*temp;
        ans=ans+pv*temp;
        pv *=2;
        n /= 10;
    }
    cout<<"Decimal number is: "<<ans;
    return 0;
}