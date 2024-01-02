#include <iostream>
using namespace std;

int main(){

    int a = 10, b = 20; 

    int *ptr = &a; 
    //ptr stores add of a

    b = *ptr + 1;
    // b stores *ptr+1=a+1=11
    //updation in *ptr and b

    ptr = &b; 
    // updation in ptr (from add of a to add of b)

    cout << *ptr <<" "<< a <<" "<< b;
    // prints *ptr (updated)
    // prints a i.e 10 (no changes in a)
    // prints b i.e 11(updated)

}

// Ans : 11 10 11
