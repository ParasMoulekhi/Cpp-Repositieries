#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a n number:";
    cin>>n;
    int inc=1;
    /*int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<inc<<" ";
            inc++;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<inc<<" ";
            inc++;
            
        }
        cout<<endl;
    }
    return 0;
}