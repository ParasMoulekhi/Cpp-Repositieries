#include<iostream>
using namespace std;

void print2DArray(int b[][6],int m,int n){ // array pass krte time coloumn ka size dena must hai coz correct shell ka pta krna h..(c * i + j)
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int b[6][6]={{1,2,17} , {3,4,18} , {5,6,19}}; //user defined array hai jisme usne 3 rows and 3 coloumns consist kri hai
    print2DArray(b,6,6); 


}