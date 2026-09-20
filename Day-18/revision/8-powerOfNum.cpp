#include<iostream>
using namespace std;

int powerOfNum(int num , int expo){
    int temp = num;
    int pow = 1;

    if(expo == 0){
        return 1;
    }
    while(pow<expo){
        temp*=num;
        pow++;
    }
    return temp;

}
int main(){
    cout<<powerOfNum(3,5);
    return 0;
}