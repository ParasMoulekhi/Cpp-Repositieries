/*ascending order ---> Lowest to highest */
#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){ 
    for(int i=0;i<n-1;i++){
        int min=arr[i],minInndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                continue;
            }else{
                min=arr[j];
                minInndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minInndex];
        arr[minInndex]=temp;
    }
}

int main(){
    int n;
    cout<<"Enter number of an arrays: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}