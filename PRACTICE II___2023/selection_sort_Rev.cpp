#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = arr[i] , miniIndex=i;
        for(int j=i+1;j<n;j++){
            if(min > arr[j]){
                min=arr[j];
                miniIndex=j;
            }
            else{
                continue;
            }
        }
        int temp=arr[i];
        arr[i]=arr[miniIndex];
        arr[miniIndex]=temp;
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