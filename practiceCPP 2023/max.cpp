#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:";
    int n;
    int max =-99999;
    int count=1;
    cin>>n;
    for(int i=n;count<=n;count ++){
        if(i>max){
            max=i;
        }

        // else{
        //     i++;
        // }

    }
    cout<<max<<endl;
    return 0;




}