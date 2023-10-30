/* comparison of two strings ---> if they both are equal return is 0 otherwise for non zero return they are not equal  
their inbuilt fuction is .........strcmp(stirng_name1,string_name2)...... */
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char input1[100] , input2[100];
    cin>>input1;
    cin>>input2;
    
    if(strcmp(input1,input2) == 0){
        cout<<"True";
    }else{
        cout<<"False";
    }
    

    return 0;
}