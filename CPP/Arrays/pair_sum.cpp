#include<iostream>
using namespace std;

int search(int arr[],int n,int s){
    int count=0;
    for(int i=0;i<n;i++){
        int temp=s-arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]==temp){
                count++;
            }
        }
    }
    cout<<count;
}

int main(){
    int t;
    cout<<"Enter no. of arrays :";
    cin>>t;

    int n;
    cout<<"Enter length of an array:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cout<<"sum which i found in array:";
    cin>>s;

    search(arr,n,s);

    return 0;
}