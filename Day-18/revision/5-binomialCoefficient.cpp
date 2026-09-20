#include<iostream>
using namespace std;

int fact(int x){
    int fact = 1;
    for(int i = 1;i<=x;i++){
        fact*=i;
    }
    return fact;

}

int nCr(int n , int r){
    return  fact(n)/(fact(r)*fact(n-r));


}
int main(){
    int n = 8,r = 2;
    cout<<nCr(n,r);

    return 0;
}