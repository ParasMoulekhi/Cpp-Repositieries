#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int min=arr[i] , minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=min;
        arr[minIndex]=temp;
    }
}

int main(){
    int arr[5]={7,8,1,4,5};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}