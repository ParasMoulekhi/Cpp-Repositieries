#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int m;
    cin>>m;
    int arr1[n];
    int arr2[m];
    cout<<"Enter elements in array 1: ";
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements in array 2: ";

    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }
            cout<<"intersection arrays are: ";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<endl;
                continue;
            }
        }
    }
    return 0;
}