#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        int count = 0;
        for(int j=0;j<str.length();j++){
            if(str[i] == str[j] && j<i){
                break;
            }
            if(str[i] == str[j] ){
                count++;
            }
        }
        if(count != 0 ){
            cout<<str[i]<<" number of times: "<<count<<endl;
        }
    }

    
}
