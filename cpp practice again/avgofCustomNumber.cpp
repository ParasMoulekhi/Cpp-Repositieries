#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum=0;
  cout<<"Enter all numbers: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 

  for(int i=0;i<n;i++){
   
    sum+=arr[i];

  }
  int length=sizeof(arr)/sizeof(arr[0]);
  int avg=(sum)/length;
 cout<< avg;




};