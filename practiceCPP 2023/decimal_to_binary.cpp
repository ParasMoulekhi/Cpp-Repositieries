#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter decimal number: ";
    cin>>n;
    int ans=0,pv=1;
    while(n!=0){
        int temp = n%2;
        n /= 2;
        pv*temp;
        ans=ans+pv*temp;
        pv*=10;
    }
    cout<<"Binary number is: "<<ans;
    return 0;
}