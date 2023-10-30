#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    bool ans=isPrime(43);
    cout<<ans<<endl;
    ans=isPrime(69);
    cout<<ans<<endl;
    
    return 0;
}