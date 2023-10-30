#include<iostream>
using namespace std;

bool odd(int n){
    if(n%2 != 0){
        return true;
    }
    return false;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e=n-1;
    for(int s=0;s<e;){
        if(odd(arr[s])){
            s++;
            continue;
        }
        else{
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            e--;
        }
    }
    printArray(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}