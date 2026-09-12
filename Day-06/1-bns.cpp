#include<iostream>
using namespace std;

void decimalToBinary(int n){
    int temp = n;
    int binaryNum = 0;
    int pow = 1; //10^0
    while(temp!=0){
        int rem = temp%2;
        binaryNum += rem*pow;
        temp = temp/2;
        pow*=10;
    }
    cout<<binaryNum<<endl;
}


void binaryToDecimal(int n){
     int temp = n;
     int decNum = 0;
     int pow = 1; //2^0
     while(temp!=0){
        int rem = temp%10;
        decNum +=rem*pow;
        pow*=2;
        temp/=10;
     }
     cout<<decNum<<endl;   
}


int main(){

    decimalToBinary(42);
    decimalToBinary(50);
    binaryToDecimal(101010);
    binaryToDecimal(110010);
    
    return 0;
}