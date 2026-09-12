//solved leetcode problem 50 with an optimized solution 

#include<iostream>
using namespace std;


//time complexity -> BigO(n)-linear
int powOfNum(int num , int expo){
    if(expo == 0){
        return 1;
    }
    else{
        int temp = num;
        int powCount = 1;
        while(powCount<expo){
            num *=temp;
            powCount++;
        }
        return num;
    }
}


int main(){
    cout<<powOfNum(3,5)<<endl;
    return 0;
}

