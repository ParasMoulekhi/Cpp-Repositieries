#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    // cout<<"function:"<<sizeof(arr);
    cout<<"Print:"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[100];
    cout<<arr<<endl;
    cout<<"Element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<"Main:"<<sizeof(arr)<<endl;
    printArray(arr,n);


    return 0;
}