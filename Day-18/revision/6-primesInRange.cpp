#include<iostream>
using namespace std;

void primesInRange(int range){

    
    for(int i = 2 ; i<=range;i++){
        bool isPrime= true;
        for(int j = 2 ; j*j<=i;j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
        cout<<i<<" ";
        }
    }
    
}

int main(){
    primesInRange(10);
    return 0;
}