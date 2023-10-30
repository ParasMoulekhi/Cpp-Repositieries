#include<bits/stdc++.h>
using namespace std;

void findDuplicate(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i != j){
                break;
            }
        }
        if(j==n){
            cout<<"Non-Repeating element is :"<<arr[i]<<endl;
            continue;
        }
    }
}




void print_Array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int t;
    cout<<"Enter no. of arrays :";
    cin>>t;

    int size;
    cout<<"Enter size of array:";
    cin>>size;

    int arr[size];
    print_Array(arr,size);
    findDuplicate(arr,size);
}
