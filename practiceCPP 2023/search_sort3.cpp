#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i],minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp; 
    }
}

int main(){
    int input[6]={3,2,9,15,11,6};
    selectionSort(input,6);
    for(int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}