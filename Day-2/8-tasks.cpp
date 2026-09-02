#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=5 ,b=7;
    cout<<"sum = "<<(a+b)<<"\n";

    int c = b++;
    int d = ++a;
    cout<<c<<endl<<d<<endl;

    int e = b--;
    int f = --a;
    cout<<e<<endl<<f;
    return 0;
}