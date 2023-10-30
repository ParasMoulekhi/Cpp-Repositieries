#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){  // fix waale ko hm outerloop me rkhenge 

        int count=0;

        for(int j=0;j<str.length();j++){ // jisne every time update hona hai usse inner loop me rkhenge..
    
            if(str[i] == str[j] && j < i ){

                break;
            }

            if(str[i] == str[j]){
                count++;
            }
        }
        if(count != 0){
            cout<<str[i]<<" number of times: "<<count<<endl;
        }
    }
}


