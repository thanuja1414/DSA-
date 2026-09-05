#include<iostream>
using namespace std;

//passbyvalues
int sum(int a , int b){
    a = a + 10;
    b = b + 10;
    cout<<"value of a in sum() func is = "<<a<<endl;
    cout<<"value of b in sum() func is = "<<b<<endl;
    return (a+b);
}



//digitSum
int digitSum(int n){
    int digitSum = 0;
    int temp =n;
    while(temp!=0){
        int rem = temp%10;
        digitSum+=rem;
        temp/=10;
    }
    return digitSum;
}



//binomial coefficient
int fact(int x){
    int fact = 1;
    for(int i = 1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}



//prime number check
void primeCheck(int n){
    bool isPrime = true;
    for(int i = 2 ; i*i<=n ; i++){
        if(n%i ==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"prime";
    }else{
        cout<<"non-prime";
    }
}


//print primes within a range
void primeNums(int n){
    for(int i = 2 ; i<=n ; i++){
        bool isPrime = true;
        for(int j = 2 ; j*j<=i ; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
}



//fibonacci - my technique
void fibonacci(int n){
    int a = 0 , b = 1;
    while(a<n){
       cout<<a<<" ";
       if(b<n){
        cout<<b<<" ";
       }
       a = a+b;
       b = b+a;
    }
}
//fibonacci easier
void fibonacciEasier(int n) {
    int a = 0, b = 1;
    while(a <= n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}


//power of a number
int powerOfNum(int num , int expo){
    int pow = 1;
    int temp = num;
    if(expo == 0){
        return 1;
    }
    // else if(expo == 1){
    //     return num;
    // }
    else{
        while(pow<expo){
            num*=temp;
            pow++;
        }
        return num;
    } 
}



int main(){
    int a = 5 , b = 4;
    cout<<sum(a,b)<<endl;
    cout<<"value of a in main() func is = "<<a<<endl;
    cout<<"value of b in main() func is = "<<b<<endl;

    cout<<digitSum(2345)<<endl;

    cout<<nCr(8,2)<<endl;
    cout<<nCr(6,3)<<endl;

    primeCheck(7);

    cout<<endl;

    primeNums(10);

    fibonacci(20);
    cout<<endl;
    fibonacciEasier(21);
    cout<<endl;

    cout<<powerOfNum(3,5)<<endl;


    return 0;
}