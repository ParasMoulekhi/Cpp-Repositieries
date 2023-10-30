#include<iostream>
using namespace std;

int main(){
    int rand = 15 & 30;
    int ror = 15 | 30;
    int rnot = ~15;
    int rxor = 15 ^ 30;
    int rls = 15 << 2;
    int rrs = 15 >> 1;

    cout<<rand<<endl;
    cout<<ror<<endl;
    cout<<rnot<<endl;
    cout<<rxor<<endl;
    cout<<rls<<endl;
    cout<<rrs<<endl;
    
    return 0;
}