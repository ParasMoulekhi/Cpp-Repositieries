#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n number:";
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
       int value=i;
       int j=1;
       while(j<=i){
        cout<<value;
        value++;
        j++;
       }
       cout<<endl;
       i++;
    }
    return 0;
}