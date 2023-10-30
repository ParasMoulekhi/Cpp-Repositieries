#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        for(int m=n;m>i;m--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}