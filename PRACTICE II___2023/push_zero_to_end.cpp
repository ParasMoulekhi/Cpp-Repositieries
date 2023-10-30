#include<iostream>
using namespace std;
int main(){
    int arr[9]={2,6,0,0,1,9,0,8,0};
    cout<<"Before pushback: ";
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nAfter pushabck: ";
    int i=0;
    int j=8;
    while(i<=j){
        if(arr[i] !=0  ){ // jb ith element non zero hoga to hmme pihce waale element ko compare ki jrorat nhi hai bss sirf i++ krna h
            i++;
        }else if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i]==0 && arr[j]==0){
            j--;
        }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

}