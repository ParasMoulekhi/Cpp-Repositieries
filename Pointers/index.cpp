#include <iostream>
using namespace std;
int main()
{
    int i = 10 ;
    cout << "The address of i is " << &i << endl;
    // Pointers are a variable which stored address of other variable.
    int* p = &i;
    cout << "The address of i is " << p << endl;
    cout << "The value at address of p is " << *p << endl;

    int** c=&p;
    cout<<c<<endl;
}
