#include<iostream>
using namespace std;

void reverse(int a[],int start,int end){
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

void reverse_array(int a[],int n,int d){
    d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);


}

int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Array is: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cout<<"How many times you want to rotate the array: ";
    cin>>d;
    
    // for(int i=d;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // for(int i=0;i<d;i++){
    //     cout<<a[i]<<" ";
    // }
    reverse_array(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }

    
   



}