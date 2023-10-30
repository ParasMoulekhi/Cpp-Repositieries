#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

bool search_Zero(int arr[],int i){
    if(arr[i]==0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    while(s<e){
        if(search_Zero(arr,s)){
            s++;
            continue;
        }
        else{
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            e--;
        }
    }
    print_array(arr,n);

}