#include<iostream>
using namespace std;

int duplicate_find(int arr[],int n){
    int temp=1;
    int i,j,k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j] && i != j){
                k=arr[i];
                temp=0;
                break;
            }
        }
    }
    if(temp==0){
        cout<<"duplicate element in array is: "<<k<<endl;
    }
    else{
        cout<<"NO. IS NOT REPATING"<<endl;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate_find(arr,n);
    return 0;
}