#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int len_s1 = s1.length();
    int len_s2 = s2.length();
    if(len_s1 != len_s2){
        cout<<"False";
        return 0;
    }
    int freq[26]={0};
    for(int i=0;i<len_s1;i++){
        int temp = s1[i] - 'a';
        freq[temp]++;
    }
    for(int i=0;i<len_s2;i++){
        int temp = s2[i] - 'a';
        freq[temp]--;
    }
    int flag = 0;
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"True";
    }else{
        cout<<"false";
    }

}

       