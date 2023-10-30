#include<iostream>
using namespace std;

void search_sorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i] , minIndex=i ;
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
    int n;
    cout<<"Enter arrays size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    search_sorting(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}