#include<bits/stdc++.h>
using namespace std;

void search_sorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i] , minIndex =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j; // isko krna mandatory hai cause isse mujhe yeh pta chelga ki mujhe array k 0th index ko kis index se swap krwana h
            }

        }
        //Swap
        int temp=arr[i]; //swap krne k liye hmme ye krna pdega ............cause 0th place pr jo element h usko hmne minimun se replace krna hai
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }
}

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    search_sorting(arr,n);   

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }        
}