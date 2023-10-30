#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        // calculate mid value  

        int mid = (s+e)/2;

        /* if the specified element is found at mid index, terminate the process and return the index. */  

        // Check middle element is equal to the defined element.

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }

    // If the element does not exist in the array, return -1.  
    
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    
    int B_S=binarySearch(arr,n,key);
    cout<<B_S<<endl;
    return 0;
}