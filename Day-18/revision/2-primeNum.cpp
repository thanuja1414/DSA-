#include<iostream>
using namespace std;
int main(){
    int num = 24;
    int count = 0;
    bool isPrime = true;
    for(int i = 2 ; i*i<=num ;i++){
        if(num%i==0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<"prime";
    }else{
        cout<<"non-prime";
    }
    return 0;
}