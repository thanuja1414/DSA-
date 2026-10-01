#include<iostream>
using namespace std;

int main(){
    char str[] ={'a','b','c'}; // normal character array.
    cout<<str<<endl; // output : abc
    // arrays are constant pointers.->point to the address of 1st element in array.If the given array is of type integer ,  the memory address will be printed in output. but for strings it is a different case.

    int nums[]={1,2,3};
    cout<<nums<<endl; // output : 0x16af9eab8 -> memory address

    char mystr[] ={'a','b','c','\0'};
    cout<<mystr<<endl;
    cout<<strlen(mystr)<<endl;
    cout<<mystr[2]<<endl;
    cout<<mystr[3]<<endl; // empty space - null character

    char clubbedStr[] ="hello"; // string literals -> values that are constant and that doesnt change.
    cout<<strlen(clubbedStr)<<endl;


    return 0;
}