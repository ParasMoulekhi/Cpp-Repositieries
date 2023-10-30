#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]<key){   
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key which i found: ";
    cin>>key;

    cout<<binarySearch(arr,n,key);
    return 0;
}