#include<iostream>
using namespace std;

int armStrongNum(int n){
    
    int temp =n;
    int digitCubeSum = 0;
    while(temp!=0){
        int digit = temp%10;
        digitCubeSum+=digit*digit*digit;
        temp/=10;
    }
    return digitCubeSum==n;
}


int main(){
    cout<<armStrongNum(153);
    return 0;
}