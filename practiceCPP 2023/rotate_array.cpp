#include<iostream>
using namespace std;

// void reverse(int a[],int start,int end){
//     while(start<end){
//         int temp=a[start];
//         a[start]=a[end];
//         a[end]=temp;
//         start++;
//         end--;
//     }

// }

// void rotate_array(int a[],int n,int d){

//     // Here n is no.of elements in an array

//     d = d % n; /* agr me is line ko na likhu to jitni value n ki hai utna hi times rotate hoga.... d ko n se plus le jaane pr output me garbadge value print hoti hai that's why i am writing it */
//     reverse(a,0,d-1);
//     reverse(a,d,n-1);
//     reverse(a,0,n-1);


// }
// int main(){
//     int n;
//     cout<<"Enter size of arrays: ";
//     cin>>n;
//     int a[n];
//     cout<<"Before pushing: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int d;
//     cout<<"No. of rotation is: ";
//     cin>>d;
//     cout<<"After pushing: ";
//     rotate_array(a,n,d);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }


// }

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cout<<"No.of rotation: ";
    cin>>d;
    d=d%n;
    cout<<"After pushing: ";
    for(int i=d;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<d;i++){
        cout<<a[i]<<" ";
    }


}