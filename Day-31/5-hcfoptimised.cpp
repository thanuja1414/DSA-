#include<iostream>
using namespace std;

//euclid's algorithm
int hcf(int a, int b){
    while(a!=0 && b!=0){
        if(a>b){
            a=a%b;
        }
        if(b>a){
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }else{
        return a;
    }
}

//hcf recursion 

int gcd(int a , int b){
    if(b==0)return a;
    if(a==0)return b;

    if(a>b){
        return gcd(a%b,a);
    }else{
        return gcd(a,b%a);
    }
}

// hcf recursion - even shorter
int gcdRec(int a , int b){
    if(b==0)return a;
    return gcdRec(b,a%b);
}


int main(){
    cout<<hcf(20,28)<<endl;
    cout<<gcd(20,28)<<endl;
    cout<<gcdRec(20,28)<<endl;
    return 0;
}