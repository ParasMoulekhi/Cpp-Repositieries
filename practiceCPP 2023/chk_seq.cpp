/*increasing to decreasing */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool increasing = true;
    bool decreasing = false;
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            flag=false;
            break;
        }else if(increasing && arr[i]<arr[i+1]){
            continue;
        }else{
            decreasing=true;
            increasing=false;
        }
        if(increasing && arr[i]>arr[i+1]){
            flag= false;
        }else if(decreasing && arr[i]<arr[i+1]){
            flag=false;
        }
    }
    if(flag){
        cout<<"True";
    }else{
        cout<<"False";
    }
}