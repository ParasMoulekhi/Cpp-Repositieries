#include<iostream>
using namespace std;

void merge(int a[],int b[],int res[],int n,int m){
    int i=0,j=0,index=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            res[index]=a[i];
            i++;
        }else{
            res[index]=b[j];
            j++;
        }
        index++;
    }
    while(i<n){
        res[index]=a[i];
        i++;
        index++;
    }
    while(j<m){
        res[index]=b[j];
        j++;
        index++;
    }
}

int main(){
    int n;
    cout<<"Enter size of an array1 : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter size of an array2 : ";
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
