#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max < a[i]){
            max=a[i];
        }
    }
    int sec_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(sec_max < a[i] && a[i] != max){
            sec_max=a[i];
        }
    }
    cout<<"sec_max is: "<<sec_max<<endl;
}