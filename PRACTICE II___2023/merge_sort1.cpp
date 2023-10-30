#include<iostream>
using namespace std;

void merge_sort(int a[],int b[],int res[],int n,int m,int k){
    int i=0,j=0,index=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            res[index]=a[i];
            index++;
            i++;
        }else{
            res[index]=b[j];
            index++;
            j++;
        }
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
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int k = n+m;
    int res[k];
    merge_sort(a,b,res,n,m,k);
    for(int i=0;i<k;i++){
        cout<<res[i]<<" ";
    }
}