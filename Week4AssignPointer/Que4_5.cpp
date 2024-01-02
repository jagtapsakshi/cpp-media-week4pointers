#include <iostream>
using namespace std;

int main(){

    int a = 15, b = 20;

    int *ptr = &a;
    //ptr stores add of a
    
    int *ptr2 = &b;
    // ptr2 stores add of b

    *ptr = *ptr2;
    //*ptr=>&a=>a = *ptr2=>&b=>b=>20

    cout<<"a:"<<a<<" "<<"b:"<<b;
}

// Ans : a gets value of b

/* Que 5
ANS : the prog is correct but the ptr contains some garbage val
and points to random memory location. the assignment of 5 to pointer
assigns the val 5 to thew memory location the poiner ptr is pointing.
*/
