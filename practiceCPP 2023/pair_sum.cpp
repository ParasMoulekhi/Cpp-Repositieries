#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Size of an array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum;
//     cout<<"Enter sum which i want to find: ";
//     cin>>sum;

//     int i,j;
//     int count=0;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == sum){
//                 count++ ;
//             }
//         }
//     }
//     cout<<"Pair Sum is: "<<count;


//     return 0;
// }

void search_sum(int arr[],int n,int s){
    int i,j;
    int count=0;
    for(i=0;i<n;i++){
        int temp = s - arr[i];
        for(j=i+1;j<n;j++){
            if(temp == arr[j]){
                count++;
            }
        }
    }
    cout<<"Pari sum is: "<<count;
}

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cout<<"Find sum which i want to find in array: ";
    cin>>s;

    search_sum(arr,n,s);
}



















