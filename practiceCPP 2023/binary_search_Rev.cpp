#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int s=0 ,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
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
    cout<<"Enter arrays size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<binary_search(arr,n,key);
    return 0;
}