#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool decreasing = true;
    bool increasing = false;
    bool flag = true;

    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            flag = false;
            break;
        }else if(decreasing && a[i]>a[i+1]){
            continue;
        }else{
            increasing = true;
            decreasing=false;
        }
        if(increasing && a[i]>a[i+1]){
            flag = false;
        }else if(decreasing && a[i]<a[i+1]){
            flag = false;
        }
    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}






















































































