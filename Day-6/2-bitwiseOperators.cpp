#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=8;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;

    cout<<(10>>1)<<endl;
    cout<<(b>>a)<<endl;

    //operator precedence
    cout<<4*5%2<<endl; 
    return 0;
}