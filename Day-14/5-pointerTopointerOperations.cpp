#include<iostream>
using namespace std;
int main(){

    int a = 10,b=20;
    int* ptrA = &a;
    int* ptrB = &b;

    cout<<ptrA<<endl;
    cout<<ptrB<<endl;

    cout<<ptrA-ptrB<<endl;


    //comparisions -> <,>,<=,>=,==,!=
    int* ptr1;
    int* ptr2;


    cout<<(ptr1<ptr2)<<endl;
    cout<<(ptr1>ptr2)<<endl;
    
    ptr1 = ptr2;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    cout<<(ptr1==ptr2)<<endl;
    cout<<(ptr1!=ptr2)<<endl;

    return 0;
}