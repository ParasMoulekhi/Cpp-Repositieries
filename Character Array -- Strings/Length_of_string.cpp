#include<bits/stdc++.h>
using namespace std;

// int length(char arr[]){  //strings or character array mein array pass krate time uska size dena jrori nhi hai
//     int count = 0;
//     for(int i=0;arr[i] != '\0';i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[10];
//     cout<<"Enter name: ";
//     cin>>name;
//     cout<<"Length of string: "<<length(name)<<endl;

//     return 0;
// }


/* String ki length find out krne k liye hm simple ----> length = strlen(array_name) bhi kr skte hai */
int main(){
    char name[100];
    cout<<"Enter name: ";
    cin>>name;
    int length=strlen(name);
    cout<<"Length of string: "<<length;
}

/* string ki length find out krne k liye hm string declare krke fir---------->  string_name.length() */
// int main(){
//     string s="Paras";  // --> direct characters daala
//     cout<<s.length();
// }

/* string ki length find out krne k liye hm string declare krke fir---------->  string_name.length() */
// int main(){
//     string s;
//     cin>>s;
//     cout<<s.length();
// }