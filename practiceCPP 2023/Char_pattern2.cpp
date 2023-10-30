#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n-1+i){
            char ch='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/*Result
ABCD
BCDE
CDEF
DEFG */