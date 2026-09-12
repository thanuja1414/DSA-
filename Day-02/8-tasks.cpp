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
    cout<<e<<endl<<f<<endl;
    


    //area of rectangle 
    int l,w;
    l=2;
    w=3;
    cout<<"area = "<<(l*w)<<endl;

    //simple interest 
    int p,t,r;
    p=1000;
    t=2;
    r=10;
    cout<<"SI = "<<((p*t*r)/100)<<endl;


    //celcius to fahrenheit and viceversa
    double celciusValue = 34;
    double fahrenheitValue = 66;
    cout<<"fahrenheit = "<<(celciusValue*(9.0/5.0)+32)<<endl;
    cout<<"celcius = "<<((fahrenheitValue-32)*5.0/9.0)<<endl;


    //even or odd
    int num=4;
    if(num%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }

    //pos or neg

    if(num>0){
        cout<<"pos"<<endl;
    }else{
        cout<<"neg"<<endl;
    }


    return 0;
}


