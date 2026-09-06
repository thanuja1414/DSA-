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
  

    //datatype modifiers
    cout<<"datatype modifiers"<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long)<<endl; //implicitly 'long long' means 'long long int'

    unsigned int customerID = 24;
    cout<<customerID<<endl;

    unsigned int x =-10; // here 2's complement(binary form) of -10 is stored but when asked to print , just the decimal form of binary number is printed.(not -10 , another number whose MSD is actually 1 not the 1 that shows (magnitude) , if the number is +ve or -ve)
    cout<<x<<endl;

    return 0;
}