#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter size of an array1: ";
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

    int m = max(n1,n2);
    int ans[m];
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
        int q = sum / 10;
        int r = sum % 10;
        carry = q;
        ans [k]=r;

        i--;
        j--;
        k--;
    }
    cout<<"Sum of both arrays is: ";
    for(auto i : ans)
    cout<<i<<" ";
    return 0;

}