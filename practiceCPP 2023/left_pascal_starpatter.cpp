#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<2*n){
        if(i<=n)
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        else if(i>n){
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
        i++;
    
    }
    return 0;
}