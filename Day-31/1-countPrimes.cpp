#include<iostream>
using namespace std;


int countPrimes(int n) {

        int count =0;
        vector<bool>isPrime(n,true);

        for(int i=2;i*i<n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<n;j=j+i){
                    isPrime[j]=false;
                }
            }
        }

        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;
            }
        }
        return count;
}

int main(){
    cout<<countPrimes(50)<<endl;
    return 0;
}