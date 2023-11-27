#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans*=i;
        i++;
    }
    return ans;
};
   
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n = fact(n);
    int fact_r= fact(r);
    int fact_n_r= fact(n-r);

    cout<<(fact_n)/(fact_n_r)*(fact_r);
};