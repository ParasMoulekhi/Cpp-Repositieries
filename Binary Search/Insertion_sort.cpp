#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;  // j+1 isliye kra h cause upr se j ki value -1 aaegi aur -1 + 1 = 0 ho jaega. 
    }
}

int main(){
    int n; 
    cout<<"Enter an array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n); // hmne main function mein user ka function call kra jo ki array ka address pass hota hai aur variable ka value jaati h 
    // jisse hm bolenge --> pass by address and pass by value.

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}