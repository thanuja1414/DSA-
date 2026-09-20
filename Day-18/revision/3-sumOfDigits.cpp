#include<iostream>
using namespace std;
int main(){
    int num = 234;
    int temp = num;
    int digitSum = 0;

    while(temp!=0){
        int digit = temp%10;
        digitSum+=digit;
        temp/=10; 
    }
    cout<<digitSum;

    return 0;
}