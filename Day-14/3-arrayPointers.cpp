#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4};
    cout<<arr<<endl;  // 0x16b0dab10 -> address of the element at 0th index
    cout<<*arr<<endl; // dereferencing -> 1 -> actual element stored at 0th index

    int a =10 , b =20;
    int* p = &a;
    cout<<p<<endl; // has address of "a"
    p = &b;
    cout<<p<<endl; // has address of "b"

    //array pointers are constant pointers , their values cant be changes like above
    // arr = &b; // generates error 


    return 0;
}