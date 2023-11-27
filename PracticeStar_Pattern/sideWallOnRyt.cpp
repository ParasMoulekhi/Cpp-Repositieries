#include<iostream>
using namespace std;
int main(){
    int n=4;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<' ';
        }
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<' ';
        }
        for(int j=i;j<=n;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}