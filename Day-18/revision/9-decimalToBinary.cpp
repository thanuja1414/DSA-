#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int temp = n;
    int pow = 1; 
    int binNum = 0;
    while(temp!=0){
        int rem = temp % 2;
        binNum += pow * rem;
        pow *=10;
        temp = temp / 2;
    }
    return binNum;
}
int main(){
    cout<<decimalToBinary(48);
    return 0;
}