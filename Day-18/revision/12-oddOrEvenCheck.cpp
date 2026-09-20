#include<iostream>
using namespace std;

string oddOrEven(int n){
    // string value =  (n&1)==0?"even":"odd";
    // return value;
    return (n&1)==0?"even":"odd";
}
int main(){
    cout<<oddOrEven(4);
    return 0;
}