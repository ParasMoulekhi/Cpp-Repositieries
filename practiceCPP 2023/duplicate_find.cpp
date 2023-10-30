#include<iostream>
using namespace std;

void duplicate(int arr[],int n){
    int flag=0;
    int i , j , k ;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j < n ; j++){
            if(arr[i]==arr[j] && i != j){
                flag=1;
                k = arr[i];
                break;
            }
        }
    }
    if(flag==1){
        cout<<"Repeating element is: "<<k;
    }else{
        cout<<"Element is not repeating here: ";
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
    duplicate(arr , n);
    return 0;
}