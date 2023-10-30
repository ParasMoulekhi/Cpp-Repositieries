#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter elements of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }
    }
    cout<<"Second largest element is: "<<secmax;

    return 0;
}