#include<bits/stdc++.h>
using namespace std;

// int main(){
//     /* push zero to end */
//     int m;
//     cout<<"Enter size of an array: ";
//     cin>>m;
//     int a[m];
//     for(int i=0;i<m;i++){
//         cin>>a[i];
//     }
//     cout<<"Push zero to end: ";

//     int i=0,j=m-1;
//     while(i<=j){
//         if(a[i] != 0){
//             i++;
//         }else if(a[i] == 0 && a[j] != 0){
//             swap(a[i],a[j]);
//             i++;
//             j--;
//         }else if(a[i]==0 && a[j]==0){
//             j--;
//         }
//     }
//     for(auto i : a)
//     cout<<i<<" ";

//     return 0;
// }


/* rotate an array */
// void reverse(int a[],int start,int end){
//     while(start<end){
//         int temp = a[start];
//         a[start]=a[end];
//         a[end] = temp;
//         start++;
//         end--;
//     }
// }

// void rotate_number(int a[],int n,int d){
//     d = d % n;
//     reverse(a,0,d-1);
//     reverse(a,d,n-1);
//     reverse(a,0,n-1);
// }

// int  main(){
//     int n;
//     cout<<"size of array: ";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int d;
//     cout<<"Enter no.of rotation: ";
//     cin>>d;

//     // d = d % n;
//     // for(int i=d;i<n;i++){
//     //     cout<<a[i]<<" ";
//     // }
//     // for(int i=0;i<d;i++){
//     //     cout<<a[i]<<" ";
//     // }

//     rotate_number(a,n,d);
//     for(auto i : a)
//     cout<<i<<" ";
// }

/*Second largest element in an array */
// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     int secmax=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(secmax<a[i] && a[i] != max){
//             secmax=a[i];
//         }
//     }
//     cout<<"Second maximum is: "<<secmax<<endl;

// }

/*Sorting 0 1 2 */
// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int low=0;
//     int mid=0;
//     int high=n-1;

//     while(mid<=high){
//         if(a[mid] == 0){
//             swap(a[mid],a[low]);
//             low++;
//             mid++;
//         }else if(a[mid] == 1){
//             mid++;
//         }else{
//             swap(a[mid],a[high]);
//             high--;
//         }   
//     }
//     for(auto i : a)
//     cout<<i<<" ";
// }
 

/* Sum of two arrays */
int main(){
    int n1;
    cout<<"Enter size of array1: ";
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }

    int n2;
    cout<<"Enter size of an array2: ";
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int m=max(n1,n2);
    int res[m];
    int i=n1-1;
    int j=n2-1;
    int k=m-1;
    int carry=0;
    while(k>=0){
        int sum=carry;
        if(i>=0){
            sum += a[i];
        }
        if(j>=0){
            sum += b[j];
        }
        int q = sum /10;
        int r = sum % 10;
        carry = q;
        res[k]= r;
        i--;
        j--;
        k--;
    }
   for(auto i : res)
   cout<<i<<" ";

}