/* sorting 0_1_2
  Input ---> 0 1 2 0 2 0 1
  Output --> 0 0 0 1 1 2 2 */

#include<iostream>
using namespace std;
int main(){
    int a[7]={0,1,2,0,2,0,1};
    int low=0;
    int mid=0;
    int high=6;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }else if(a[mid] == 1){
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }

}