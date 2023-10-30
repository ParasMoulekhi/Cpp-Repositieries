/* soritng 0 1 2 
use Dutch flag algorithm */

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter number of arrays: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }else if(a[mid] == 1){
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(auto i : a)
    cout<<i<<" ";
    return 0;
}

