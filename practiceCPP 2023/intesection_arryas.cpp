#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a1[n];
    int a2[m];
    cout<<"Enter elements in a1: ";
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }

    cout<<"\nEnter elements in a2: ";
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }

    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a1[i] == a2[j] ){
                cout<<a1[i]<<" ";
                break;

            }else{
                continue;
            }
        }
    }
    return 0;
}   