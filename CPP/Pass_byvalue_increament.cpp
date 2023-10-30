#include<iostream>
using namespace std;

int increament(int a){
    a=a+1;
    return a;
}

int main(){
    int n=10;
    n=increament(n);/*callee function ki value main me update krne k liye..... n me assign krwana jrori hai */
    cout<<n<<endl;

    return 0;
}

/* Pass by value mein only value pass hoti hai ...........variable nhi hota wo apni jgh rhta hai agr hmmne 
jo value pass krwai hai aur uske updation ko main() function me reflex krni hai to hme caller ne jo fucntion 
call kra hai usko uss variable me assign krwana hoga  */