#include <iostream>
using namespace std;

int main(){

    int x,y,ans;    
    int*p1 = &x; 
    int*p2 = &y;
    int*p3 = &ans;

    cout<<"Enter first number:";
    cin>>*p1;
    cout<<"Enter second number:";
    cin>>*p2;
    *p3 = (*p1)*(*p2);

    cout<<"Product of numbers:"<<*p3<<endl;



} 

/*Que 2
int *p, q;
p is a pointer and q is an integer 
*/

