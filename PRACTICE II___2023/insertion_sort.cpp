/*Lowest to highest */
#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i = 1 ; i < n ; i++){
        int j,current = arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>current){
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
    cout<<"Enter number of arrays: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}