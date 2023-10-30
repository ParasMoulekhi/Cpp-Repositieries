#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of arrays: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    int secmax= INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>secmax && a[i] != max){
            secmax=a[i];
        }
    }
    cout<<"Secmax is: "<<secmax;
}