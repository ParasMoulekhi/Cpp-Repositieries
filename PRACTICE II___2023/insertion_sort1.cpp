#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        int current=arr[i];
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=current;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}