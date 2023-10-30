#include<iostream>
using namespace std;

void LinearSearch(int arr[],int a ,int n){
    int temp=1;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"Number is present in arrays which is at position: "<<i+1<<endl;
            temp=0;
            break;
        }
    }
    if(temp==1){
        cout<<"Does not exists "<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter number which i want to find out in arrays:"<<endl;
    cin>>num;
    LinearSearch(arr,num,n);
    return 0;
}