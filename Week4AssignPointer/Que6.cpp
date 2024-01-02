#include <iostream>
using namespace std;

int main(){

    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;

}

//The program can get an error when in running state. 
//There's a part where ptr holds an uncertain address, 
//like having a house number without knowing the actual house. 
//This could make the program try to access a place it shouldn't,
// causing it to crash. It's like trying to find a place using a wrong or 
//unknown address.