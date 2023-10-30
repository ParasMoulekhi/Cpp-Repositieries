#include<iostream>
using namespace std;

void print_1_to_n(int n){
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}

int main(){
    print_1_to_n(10);  /*I do not say like this int a = print_1_to_n(10) coz function kuch return nhi kr rha ....void functions 
    ko sirf call kra jata hai bsss*/
    return 0;
}