#include<iostream>
using namespace std;

// void print_array(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// }

// int triplet(int arr[],int n,int s){
//     int count =0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==s){
//                     count++;
//                 }
//             }
//         }
//     }

//     return count;
// }

// int main(){
//     int t;
//     cout<<"Enter number of arrays :";
//     cin>>t;

//     int n;
//     cout<<"Enter array size :";
//     cin>>n;
//     int arr[n];
//     int s;
//     cout<<"sum jisse find krna hai:";
//     cin>>s;
//     print_array(arr,n);
//     int triplet_sum=triplet(arr,n,s);
//     cout<<triplet_sum<<endl;
//     return 0;
// }

void triplet_sum(int arr[],int n,int s){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    count ++;
                }
            }
        }
    }
    cout<<count;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int t;
    cout<<"Enter no. of arrays:";
    cin>>t;

    int n;
    cout<<"Size of arrays:";
    cin>>n;
    int arr[n];

    int s;
    cout<<"Sum which i found:";
    cin>>s;
    printArray(arr,n);
    triplet_sum(arr,n,s);

    

}