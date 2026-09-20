#include<iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b =1 , next = a+b;
    while(a<n){
        cout<<a<<" ";
        a = b;
        b = next;
        next = a+b;
    }
}
int main(){
    fibonacci(10);
    return 0;
}