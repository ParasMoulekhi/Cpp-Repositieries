#include<bits/stdc++.h>
using namespace std;

int main(){
    int basic;
    char grade;
    cin>>basic>>grade;
    cout<<"Basic salary is: "<<basic<<"\nGrade is: "<<grade<<endl;
    double HRA= 0.2 * basic;
    double DA = 0.5 * basic;
    double PF = 0.11 * basic;
    int allow;

    if(grade=='A'){
         allow=1700;
    }else if(grade=='B'){
        allow=1500;
    }else{
        allow=1300;
    }
    double total_salary = basic + HRA + DA + allow - PF;
    cout<<"Total salary is: "<<round(total_salary); /*kisi bhi integral part ka round fig krne k liye usse.....round(10.5)......kr do*/
    
    return 0;
}