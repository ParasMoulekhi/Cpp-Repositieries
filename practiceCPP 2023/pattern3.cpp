#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n number:";
    cin>>n;
    int temp=1;
    int i=1;
    while(i<=n){
        int j=1;
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=i){
            cout<<temp;
            temp++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}