#include<iostream>
using namespace std;

void merge(int a[],int b[],int res[],int n,int m){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;
        }else{
            res[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n){
        res[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        res[k]=b[j];
        j++;
        k++;
    }
}

int main(){
    int n;
    cout<<"Enter array1 size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter array2 size: ";
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int k = n+m;
    int res[k];
    merge(a,b,res,n,m);
    for(int i=0;i<k;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}