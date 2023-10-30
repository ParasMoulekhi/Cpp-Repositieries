#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        int temp=n % 10;
        if(temp==0){
            n /= 10;
            continue;
        }else{
            ans = ans*10 + temp;
            n/=10;
        }
    }
    cout<<ans;
    return 0;
}