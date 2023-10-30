#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of terms: ";
    cin>>x;
    int count =0;

    for(int n=1;count < x ; n++){
        int value = 3 *n +2;
        if(value % 4 == 0){
            continue;
        }else{
            cout<<value<<" ";
            count ++;

        }
    }


    return 0;
}