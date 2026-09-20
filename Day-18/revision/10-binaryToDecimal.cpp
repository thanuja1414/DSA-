#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int decNum = 0;
    int temp = n;
    int pow = 1; //2^0
    while(temp!=0){
        int digit = temp%10;
        decNum += digit*pow;
        pow *= 2;
        temp/=10;
    }
    return decNum;
}
int main(){
    cout<<binaryToDecimal(110000);
    return 0;
}