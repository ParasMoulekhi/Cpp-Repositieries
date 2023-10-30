#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int freq[26]={0};//character frequency array hai
    for(int i=0;i<s.length();i++){
        int temp = s[i] - 'a';
        freq[temp]++;
    }

    int max = -1;
    int index = -1;
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max = freq[i];
            index = i;
        }
    }
    char ans = 'a' + index ;
    cout << "most occuring character: "<<ans<<endl;
}