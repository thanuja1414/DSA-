#include<iostream>
using namespace std;

int powOf2(int n){
    return n>0 && (n&(n-1))==0;
}
int main(){
    cout<<powOf2(33);
    return 0;
}