#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%2==0){
        return false;
        }
    }
      
    return true;
    
}   
   

int main(){
    int n;
    cin>>n;
    bool chck_prime=isPrime(n);
    cout<<chck_prime<<endl;
    return 0;
}