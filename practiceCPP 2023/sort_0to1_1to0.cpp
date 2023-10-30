#include<iostream>
using namespace std;

bool search_zero(int arr[],int s){
    if(arr[s]==0){
        return true;
    }
    return false;
} 

int main(){
    int n;
    cout<<"Size of an array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,e=n-1;
    while(s<e){
        if(search_zero(a,s)){
            s++;
            continue;
        }else{
            int temp=a[s];
            a[s]=a[e];
            a[e]=temp;
            e--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}