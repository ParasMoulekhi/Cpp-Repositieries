#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number to find its precedding all odd numbers:";
    int n;
    cin>>n;
    int flag=2;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            flag=1;
        }
        else{
            cout<<i<<" ";
        }
    }
    // for(int i=1;i<=n;i++){
    //      if(i%2!=0){
    //         cout<<i<<" ";
    //      }
    // }
}