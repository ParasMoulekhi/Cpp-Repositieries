#include<iostream>
using namespace std;

int Fahr(int f){
        return (5.0/9)*(f-32);
}

int main(){
    int S,E,W;
    cin>>S>>E>>W;
    for(int i=S;i<=E;i+=W){
        
    cout<<i<<'\t'<<Fahr(i)<<endl;
    }
    
    return 0;
}

// int ftoc(int n){
//     int ans = ((n-32)*5)/9;
//     return ans;
// }
// int main(){
//     int s, e, w;
//     cin>>s>>e>>w;
//     int i = s;
//     while(i <= e){
//         cout<<i<<'\t'<<ftoc(i)<<endl;;
//         i += w;
//     }

//     return 0;
// }