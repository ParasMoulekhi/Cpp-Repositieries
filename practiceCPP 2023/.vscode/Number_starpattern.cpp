#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(int k=1;k<2*i-1;k++){
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}