#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(int j=i;j<=2*i-1;j++){
            cout<<j;
        }
        cout<<endl;
        i++;
    }
    return 0;
}