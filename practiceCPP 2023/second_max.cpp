#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an arrays: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;


    int secmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(secmax < arr[i] && arr[i] < max){
            secmax=arr[i];
        }
    }

    cout<<secmax;
    return 0;
}