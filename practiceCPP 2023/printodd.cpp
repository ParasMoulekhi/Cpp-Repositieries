#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number :";
    int n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //          cout<<i<<" ";
    //     }    
    // }
    int flag=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            flag=1;
        }
        else{
            cout<<i<<" ";
        }
    }
    
    
}