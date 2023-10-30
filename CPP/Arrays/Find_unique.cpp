#include<iostream>
using namespace std;

int find_unique(int b[],int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i]==b[j] && i!=j){
                break;
            }
        }
        if(j==n){
            cout<<"Non-Repeating element is:"<<b[i]<<endl;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    find_unique(b,n);

    return 0;
}