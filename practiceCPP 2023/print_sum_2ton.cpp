#include<iostream>
using namespace std;

bool chk_even(int n){
        if(n%2==0)
            return true;

    return false;
}

int main(){
    int n,sum=0;
    cout<<"Enter n:";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(chk_even(i)){
            sum=sum+i;
            
        }
    }
    cout<<sum;
    return 0;
}