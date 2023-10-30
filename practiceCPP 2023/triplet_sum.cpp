#include<iostream>
using namespace std;

void search_triplet(int arr[],int n ,int sum){
    int i , j , k ,count = 0;
    for(i=0 ; i<n ; i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    count++;
                }
            }
        }
    }
    cout<<"Triplet sum is: "<<count;
}

int main(){
    int n;
    cout<<"size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    cout<<"Enter triplet sum:  ";
    cin>>sum;

    search_triplet(arr,n,sum);
    return 0;
}


/* triplet sum me 3 loop chlenge jisme i , j , k hota hai aur
k depends on j , j depends on i */