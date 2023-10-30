#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n;
    while(i>=1){
        int j=i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
/*Result 
4
34
234
1234 */