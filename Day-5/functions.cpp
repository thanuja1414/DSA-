#include<iostream>
using namespace std;


//function definition
int printHello(){ //first function is declared before it is called in ,main function
    cout<<"hello\n";
    return 3;
}

//function with parameters
int sum(int a , int b){
    return a+b;
}

double sumOfDoubles(double a  , double b ){
    return a+b;
}

//min of two nums
void minOfNums(int a , int b){
    if(a>b){
        cout<<b<<" is minimum"<<endl;
    }else{
        cout<<a<<" is minimum"<<endl;
    }
}
//or 

int minNums(int a ,int b){//parameters -> copy of the arguements
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int sumUpto(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

//calculate n factorial 
int fact(int n){
    int fact = 1;
    for(int i = 1; i<=n;i++){
        fact*=i;
    }
    return fact;
}

void fun(){
    return; // doesnt return any value , but returns control to main()
}

int main(){
   
    //function call
    printHello();
    int val = printHello();
    cout<<"value = "<<val<<endl;

    //or 
    cout<<printHello()<<endl;

    cout<<sum(2,3)<<endl;

    cout<<sumOfDoubles(5.6,7.8)<<endl;

    minOfNums(56,78);

    cout<<minNums(45,54)<<endl; //arguements -> actual values

    cout<<sumUpto(4)<<endl;

    cout<<fact(6)<<endl;


     return 0;
}



