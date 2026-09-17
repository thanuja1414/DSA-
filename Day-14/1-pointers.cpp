#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    cout<<&a<<endl; // prints the memory address of the variable
    cout<<ptr<<endl;

    cout<<&ptr<<endl;
    //pointer to pointer 
    int** ptrToptr = &ptr;
    cout<<ptrToptr<<endl;

    float price = 100.2f;
    float* ptr2 = &price;
    cout<<ptr2<<endl;
    cout<<&price<<endl;


    //dereference -> shows the value at a particular address
    cout<<*(&a)<<endl; // prints 10
    cout<<*(ptr)<<endl; // ptr has address of a -> * before ptr prints the contents in a.

    cout<<*(*(ptrToptr))<<endl;
    cout<<*(ptr)<<endl;

    return 0;
}