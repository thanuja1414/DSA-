#include<iostream>
using namespace std;

int reverseNum(int n){

    int revNum=0;

    while(n!=0){
        int digit = n%10;
        if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
            return 0;
        }
        revNum = revNum*10+digit; // if a number that is out of range of integer occurs , it occurs when it is multiplied to 10 so before multiplying 10 check if already the obtained number will go out of range or not by dividing it with 10 for INT_MAX and INT_MIN.
        n/=10;

    }
    return revNum;
}

int main(){
    cout<<reverseNum(3456)<<endl;
    return 0;
}