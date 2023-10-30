#include<iostream>
using namespace std;

void find_unique(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i != j){
                break;
            }
        }
        if(j==n){
            cout<<"Non-Repeating element is: "<<arr[i];
            continue;
        }
    }
}

void print_Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    print_Array(arr,n);
    find_unique(arr,n);

    return 0;
}