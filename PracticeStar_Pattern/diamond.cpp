#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }
        for(int m=1;m<i;m++){
            cout<<'*';
        }
        for(int k=1;k<=i;k++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<' ';
        }
        for(int m=i;m<n;m++){
            cout<<'*';
        }
        for(int k=i;k<=n;k++){
            cout<<'*';
        }
        cout<<endl;
    }
}