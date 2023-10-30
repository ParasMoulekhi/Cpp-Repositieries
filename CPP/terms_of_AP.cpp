/*print x terms of an AP which are not divisible by 4 */
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;

    int count = 0 ;//use count here the reason of this we use count for updation of next terms and it is upgrade when term are not divisble by 4
    for( int n = 1 ; count < x; n++ ){
        int value = 3 * n + 2;
        if( value % 4 == 0){
            continue ;
        }else{
            cout<< value <<" ";
            count++;
        }
    }
    return 0;
}