/*Highest to lowest 
selection sort */
#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int max=arr[i],maxIndex=i;
        for(int j=i+1;j<n;j++){
            if(max<arr[j]){
                max=arr[j];
                maxIndex=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[maxIndex];
        arr[maxIndex]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}