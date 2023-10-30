#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void RO(int arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        /* Swap */
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

int main(){
    int arr[20]={1,2,3,4,5};
    RO(arr,5);
    PrintArray(arr,5);
    return 0;
}