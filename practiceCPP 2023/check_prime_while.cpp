#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n numbers:"<<endl;
    cin>>n;
    bool divide=false;
    int i=2;
    while(i<n){
        if(n%i==0){
            divide=true;
            cout<<"Not prime"<<endl;
        }
        i++;
    }
    if(!divide){
        cout<<"Prime";
    }
}