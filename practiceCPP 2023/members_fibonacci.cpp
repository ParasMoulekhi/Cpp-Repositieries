#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no.of terms :";
    cin>>n;

    int t;
    cout<<"Enter number which i found in series :";
    cin>>t;

    int a=0,b=1,c;
    int flag=0;
    while(a<n){
        if(a==t){
            cout<<"Present";
            flag=1;
            break;
        }else if(a<t){
            c=a+b;
            a=b;
            b=c;
        }else{
            break;
        }
    }
    if(flag==0){
        cout<<"Absent";
    }
    return 0;
}