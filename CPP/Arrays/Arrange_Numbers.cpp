#include<iostream>
using namespace std;

bool Odd(int n){
    if(n % 2 != 0)
        return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = n-1;
    while(i < j){
        if(Odd(arr[i])){
            i++;
            continue;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}