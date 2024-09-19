
// Write a program that swaps the values of two integer variables without using a third variable. Use arithmetic operations
#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;
    cout <<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout <<a<<" "<<b<<endl;
    
}