#include<iostream>
using namespace std;

void intersection(int arr[], int arr2[],int n ,int m){
    int i , j;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr2[j]){
                cout<<arr2[j]<<" ";
            }
        }
    }
}

int main(){
    int t;
    cout<<"how many arrays you want :"<<endl;
    cin>>t;
    int n,m;
    cin>>n>>m;
    int arr[n],arr2[m];
    cout<<"Enter elements of array 1:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Eneter elements of array 2:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr, arr2, n ,m );


    return 0;
}