#include<iostream>
using namespace std;

//brute force logic 
int hcf(int a , int b){
    int gcd=1;

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    if(a==b){
        return a; // or return b
    }
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    int a=20,b=28;
    cout<<hcf(a,b)<<endl;
    return 0;
}