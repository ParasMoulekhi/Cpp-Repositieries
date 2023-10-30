#include<bits/stdc++.h>
using namespace std;

// int main(){
//     char s[100];
//     cin>>s;
//     char c1,c2;
//     cin>>c1>>c2;
//     int length = strlen(s);
//     for(int i=0;i<length;i++){
//         if(s[i]==c1){
//             s[i]=c2;
//         }
//     }
//     cout<<s;
//     return 0;
// }

int main(){
    string s;
    cin>>s;
    char c1,c2;
    cin>>c1>>c2;
    for(int i=0;i<s.length();i++){
        if(s[i]==c1){
            s[i]=c2;
        }
    }
    cout<<s<<endl;
    return 0;
}


