#include<iostream>
using namespace std;

int powOfNum(int base ,int expo){

    long binForm = expo;
    int ans = 1;
    if(expo<0){
        base = 1/base;
        expo = -expo;
    }
    while(binForm>0){
        if(binForm%2==1){
            ans=ans*base;
        }
        base*=base;
        binForm=binForm/2;
    }
    return ans; 
}
int main(){
    cout<<powOfNum(3,5);
    return 0;
}