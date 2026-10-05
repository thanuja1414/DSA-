#include<iostream>
using namespace std;

//there is an even better solution.
int countPrimes(int n) {

        int count =0;
        vector<bool>isPrime(n+1,true);

        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;

                for(int j=i*2;j<n;j=j+i){
                    isPrime[j]=false;
                }
            }
    
        }
        return count;
}

int main(){
    cout<<countPrimes(50)<<endl;
    return 0;
}